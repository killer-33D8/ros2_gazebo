[English Version/英文版](README_EN.md)
# 1. 项目描述
本项目为宇树机器狗系列第一章ROS2-Gazebo仿真的基础项目仓库，该仓库会随着系列项目的推进不定时进行更新，当前计划可查看本人飞书查看项目情况[项目飞书](https://ai.feishu.cn/wiki/CVpbwLIiMiwGnekKjhMcLXTRnag?from=from_copylink)，这个项目预计将会是一个超长期项目。

# 2. 依赖安装（首次在机器上运行前必做）
编译前需已安装 ROS2 及本仓库所需的系统包。请按你的 ROS2 发行版执行（把 `jazzy` 换成 `humble`/`iron` 等）：

若 `colcon build` 报错找不到 `nav2_bringup`，安装 Navigation2：
```bash
sudo apt update
sudo apt install -y ros-jazzy-navigation2 ros-jazzy-nav2-bringup
```

若运行时报错 **`ModuleNotFoundError: No module named 'tf_transformations'`**，安装：
```bash
sudo apt install -y ros-jazzy-tf-transformations
```

可选：若仍缺其他依赖，可安装完整桌面：`sudo apt install -y ros-jazzy-desktop`
安装后先 source 再编译：
```bash
source /opt/ros/humble/setup.bash   # 或你的发行版
cd ~/Desktop/ROS2-Gazebo-GO2
colcon build
```

# 3. 项目使用
## 3.1 直接编译使用
**说明**：工作空间即本仓库的根目录。若你是通过 `git clone` 得到的（例如目录名为 `ROS2-Gazebo-GO2`），请用**当前仓库所在路径**操作，无需改名为 `go2_sim_ws`。

**常见错误**：① 命令是 `source` 不是 `soure`；`install/setup.bash` 不是 `setup.sh`。② 若目录不是 `go2_sim_ws`，必须用 `export CYCLONEDDS_URI=file://$(pwd)/src/docker/cyclonedds.xml`（在仓库根目录下执行），不要用 `~/go2_sim_ws`。③ 若出现 `Package 'gazebo_sim' not found`，说明编译未成功（例如 navigation2 失败），需先按第 2 节安装依赖并重新 `colcon build`。④ 若出现 `Unable to find uri[model://rmuc_2025]`，请拉取最新代码（launch 已自动设置模型路径）并重新 `colcon build`。

进入到工作空间（将下面的 `go2_sim_ws` 替换为你实际克隆的目录路径，如 `ROS2-Gazebo-GO2`）：
```bash
cd go2_sim_ws   # 或 cd ROS2-Gazebo-GO2 等，即仓库根目录
colcon build
source install/setup.bash
# 使用当前工作空间绝对路径，适用于任意克隆路径（含远程服务器）
export CYCLONEDDS_URI=file://$(pwd)/src/docker/cyclonedds.xml
```

![alt text](images/image-17.png)

启动，第一次启动会比较久，因为需要下载相应的场景资源。
```bash
ros2 launch gazebo_sim launch.py
```
成功启动后会如下图所示。
![alt text](images/image-18.png)

本项目配备了一个狗的前置普通单目摄像头用以模拟GO2本身的前置摄像头，同时配备了两个激光雷达，一个为模拟GO2的前置L1激光雷达，一个为模拟外界的VLP16激光雷达，两个激光雷达都可同时发布LaserScan类型数据和PointCloud2类型数据，为后续的建图和导航工作提供了便利，而后续也会更新加入D435i摄像头（已经加入D435i摄像头）。
```bash
cd go2_sim_ws   # 或你的工作空间路径（仓库根目录）
source install/local_setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel
```
在终端中执行上述命令后就可以使用键盘对其进行简单的控制了，同时可以使用下面的服务完成对机器狗的控制,支持的服务有walk、up、sit，分别对应走、站、趴。
```bash
ros2 service call /robot1/robot_behavior_command quadropted_msgs/srv/RobotBehaviorCommand "{command: 'walk'}"
```

**若按键盘画面中的机器人不动**：① 先发一次「走」再控（**发服务前必须在本终端先 `source install/setup.bash`**，否则会报 The passed service type is invalid）：`ros2 service call /robot1/robot_behavior_command quadropted_msgs/srv/RobotBehaviorCommand "{command: 'walk'}"`，然后再按键盘。② 确保键盘控制的终端处于焦点（用鼠标点一下该终端再按 i/j/k/l 等）。③ 在第三个终端用 `ros2 topic echo /robot1/cmd_vel` 看按键时是否有输出，若无则检查该终端是否已 `source install/setup.bash` 且 remap 正确。

**若 `ros2 service list` 里没有 `/robot1/robot_behavior_command`**：说明 quadruped_controller 节点未运行或已退出。请先 `ros2 node list | grep quad` 确认是否有 `/robot1/quadruped_controller`；若无，在**运行仿真的终端**里向上滚动查看是否有该节点的 Python 报错，或另开终端执行 `ros2 run quadropted_controller robot_controller_gazebo.py --ros-args -r __ns:=/robot1 -p use_sim_time:=true`（仿真保持运行）查看报错内容。修复后需重新 `colcon build` 并重启仿真。

## 3.2 docker使用
在使用docker前请简单的阅读docker搭建流程指南，因为每个人的情况还是会有些许差别，而为我使用的是外挂卷的形式完成的任务。
使用下面的命令可以很快的帮您完成想要的操作（将 `go2_sim_ws` 替换为你的仓库根目录名）。
```bash
cd go2_sim_ws/src/docker   # 或 cd ROS2-Gazebo-GO2/src/docker
docker compose up -d --build --remove-orphans        #容器构建
docker compose up -d go2_sim                        #启动容器，-d为不进入docker终端,ros2_sim是众多服务中的一个服务
docker compose ps                                    #容器查看
docker compose exec go2_sim bash                    #进入容器
docker compose down                                  #容器删除
```
进入到docker后，可以按照前面直接安装的操作来
```bash
colcon build
source install/setup.bash
```
![alt text](images/image-19.png)

启动，第一次启动会比较久，因为需要下载相应的场景资源。
```bash
ros2 launch gazebo_sim launch.py # 启动无扩展传感器go2
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf # 启动带扩展传感器go2,并选定地图
```
成功启动后会如下图所示。

![alt text](images/image-20.png)

本项目配备了一个狗的前置普通单目摄像头用以模拟GO2本身的前置摄像头，同时配备了两个激光雷达，一个为模拟GO2的前置L1激光雷达，一个为模拟外界的VLP16激光雷达，两个激光雷达都可同时发布LaserScan类型数据和PointCloud2类型数据，为后续的建图和导航工作提供了便利，而后续也会更新加入D435i摄像头。
```bash
cd go2_sim_ws   # 或你的工作空间路径（仓库根目录）
source install/local_setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel
```
在终端中执行上述命令后就可以使用键盘对其进行简单的控制了，同时可以使用下面的服务完成对机器狗的控制,支持的服务有walk、up、sit，分别对应走、站、趴。
```bash
ros2 service call /robot1/robot_behavior_command quadropted_msgs/srv/RobotBehaviorCommand "{command: 'walk'}"
```
## 3.3 建图和导航
建图需在终端中输入如下命令
```bash
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf 
ros2 launch cartographer go2_cartographer.launch.py
 ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel #【键盘控制
 ros2 run nav2_map_server map_saver_cli -t map -f warehouse_map #保存地图
```
![alt text](images/image-21.png)

导航需要在终端中输入如下命令
```bash
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf 
ros2 launch navigation2 go2_navigation2.launch.py 
```
![alt text](images/image-22.png)