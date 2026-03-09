# 1. Project Description
This repository is the foundational ROS2-Gazebo simulation project for Chapter 1 of the Unitree robot dog series. The repository will be updated from time to time as the full project series progresses. You can check the current project plan on my Feishu page: [Feishu Project Page](https://ai.feishu.cn/wiki/CVpbwLIiMiwGnekKjhMcLXTRnag?from=from_copylink). This is expected to be a very long-term project.

# 2. Dependencies (required before first build)
You need ROS2 and the Navigation2 stack installed. If `colcon build` fails with "Could not find nav2_bringup", install Navigation2 **on that machine** (replace `humble` with your ROS2 distro, e.g. `iron`, `jazzy`):
```bash
sudo apt update
sudo apt install -y ros-humble-navigation2 ros-humble-nav2-bringup
# If other deps are missing, you can install the full desktop (optional):
# sudo apt install -y ros-humble-desktop
```
Then source and build:
```bash
source /opt/ros/humble/setup.bash   # or your distro
cd ~/Desktop/ROS2-Gazebo-GO2
colcon build
```

# 3. How to Use the Project
## 3.1 Build and Run Directly
**Note:** The workspace is the repository root. If you cloned the repo (e.g. into `ROS2-Gazebo-GO2`), use that path; you do not need a folder named `go2_sim_ws`.

Go to the workspace (replace `go2_sim_ws` with your actual repo path, e.g. `ROS2-Gazebo-GO2`):
```bash
cd go2_sim_ws   # or: cd ROS2-Gazebo-GO2 (your repo root)
colcon build
source install/setup.bash
# Use absolute path so it works on any clone path (e.g. remote server)
export CYCLONEDDS_URI=file://$(pwd)/src/docker/cyclonedds.xml
```

![alt text](images/image-17.png)

Launch the simulation. The first launch may take longer because required world resources need to be downloaded:
```bash
ros2 launch gazebo_sim launch.py
```
After a successful launch, you should see something like this:
![alt text](images/image-18.png)

This project includes:
- A front monocular camera to simulate the GO2 front camera
- Two LiDAR sensors:
  - A front L1 LiDAR to simulate GO2’s built-in LiDAR
  - An external VLP16 LiDAR

Both LiDARs can publish `LaserScan` and `PointCloud2` data simultaneously, making mapping and navigation workflows easier. A D435i camera has also been added.

Use keyboard teleoperation:
```bash
cd go2_sim_ws   # or your workspace path (repo root)
source install/local_setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel
```

After running the command above, you can control the robot dog with your keyboard. You can also use the following service to control behavior. Supported commands are `walk`, `up`, and `sit`.
```bash
ros2 service call /robot1/robot_behavior_command quadropted_msgs/srv/RobotBehaviorCommand "{command: 'walk'}"
```

## 3.2 Using Docker
Before using Docker, please read the Docker setup guide briefly, since environments may differ. In my setup, I use mounted volumes.

The following commands cover the main Docker workflow (replace `go2_sim_ws` with your repo root name):
```bash
cd go2_sim_ws/src/docker   # or: cd ROS2-Gazebo-GO2/src/docker
docker compose up -d --build --remove-orphans        # Build containers
docker compose up -d go2_sim                        # Start container in detached mode
docker compose ps                                    # List containers
docker compose exec go2_sim bash                    # Enter container
docker compose down                                  # Remove containers
```

Inside the Docker container, follow the same steps as direct local usage:
```bash
colcon build
source install/setup.bash
```

![alt text](images/image-19.png)

Launch the simulation. First launch may take longer due to resource downloads:
```bash
ros2 launch gazebo_sim launch.py # Launch GO2 without extended sensors
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf # Launch GO2 with extended sensors in selected map
```
After successful startup, you should see:

![alt text](images/image-20.png)

As above, the project includes a front monocular camera and two LiDARs (GO2 front L1 + external VLP16), both of which can publish `LaserScan` and `PointCloud2`. This supports later mapping/navigation tasks. A D435i camera is also included.

```bash
cd go2_sim_ws
source install/local_setup.bash
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel
```

Once the command runs, you can control the robot dog with keyboard input. Behavior services support `walk`, `up`, and `sit`.
```bash
ros2 service call /robot1/robot_behavior_command quadropted_msgs/srv/RobotBehaviorCommand "{command: 'walk'}"
```

## 3.3 Mapping and Navigation
For mapping, run the following commands in terminal:
```bash
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf
ros2 launch cartographer go2_cartographer.launch.py
ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel # keyboard control
ros2 run nav2_map_server map_saver_cli -t map -f warehouse_map # save map
```

![alt text](images/image-21.png)

For navigation, run:
```bash
ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf
ros2 launch navigation2 go2_navigation2.launch.py
```

![alt text](images/image-22.png)
