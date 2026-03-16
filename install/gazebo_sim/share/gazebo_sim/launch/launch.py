import os
import tempfile
from ament_index_python.packages import get_package_share_directory


from launch import LaunchDescription, LaunchContext
from launch.actions import (
   IncludeLaunchDescription,
   DeclareLaunchArgument,
   ExecuteProcess,
   RegisterEventHandler,
   OpaqueFunction,
   SetEnvironmentVariable,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.event_handlers import OnProcessExit
from launch_ros.actions import SetParameter


def create_gazebo_action(context: LaunchContext, package_name: str):
   world_name = LaunchConfiguration('world').perform(context)
   pkg_path = get_package_share_directory(package_name)
   world_file = os.path.join(pkg_path, 'world', world_name)
   models_path = os.path.join(pkg_path, 'models')
   icra_model_sdf = os.path.join(models_path, 'icra_map_flat', 'model.sdf')


   # 若为 icra 世界且存在 icra_map_flat 模型，用 file:// 绝对路径避免 GZ 找不到 model://
   if world_name == 'icra_flat_world.sdf' and os.path.isfile(icra_model_sdf):
       with open(world_file, 'r') as f:
           content = f.read()
       content = content.replace(
           'model://icra_map_flat',
           'file://' + icra_model_sdf
       )
       fd, world_file = tempfile.mkstemp(suffix='.sdf')
       try:
           with os.fdopen(fd, 'w') as f:
               f.write(content)
       except Exception:
           os.close(fd)
           os.remove(world_file)
           raise


   gazebo_action = IncludeLaunchDescription(
       PythonLaunchDescriptionSource(os.path.join(
           get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')),
       launch_arguments={
           'gz_args': ['-r -v4 ', world_file],
           'on_exit_shutdown': 'true'
       }.items()
   )
   return [gazebo_action]


def choose_launch_file(context, *args, **kwargs):
   use_sensors = LaunchConfiguration('sensors').perform(context)
   package_name = 'gazebo_sim'
   pkg_path = get_package_share_directory(package_name)
  
   if use_sensors.lower() == 'true':
       launch_file = 'gazebo_go2_sensors.launch.py'
   else:
       launch_file = 'gazebo_go2_self.launch.py'
  
   return [
       IncludeLaunchDescription(
           PythonLaunchDescriptionSource(
               os.path.join(pkg_path, 'launch', launch_file)
           )
       )
   ]


def generate_launch_description():
   ld = LaunchDescription()
   package_name = 'gazebo_sim'


   # 让 Gazebo 能解析 model:// 路径（如 model://rmuc_2025）
   pkg_share = get_package_share_directory(package_name)
   models_path = os.path.join(pkg_share, 'models')
   existing = os.environ.get('GZ_SIM_RESOURCE_PATH', '')
   gz_resource_path = models_path if not existing else models_path + os.pathsep + existing
   ld.add_action(SetEnvironmentVariable('GZ_SIM_RESOURCE_PATH', gz_resource_path))


   use_sim_time = LaunchConfiguration('use_sim_time', default='true')
   ld.add_action(DeclareLaunchArgument(
       'use_sim_time',
       default_value='true',
       description='是否使用仿真时间'
   ))
   ld.add_action(SetParameter(name='use_sim_time', value=use_sim_time))


   ld.add_action(DeclareLaunchArgument(
       'sensors',
       default_value='false',
       description='是否启动传感器版launch文件（默认启动无外置传感器版）'
   ))


   ld.add_action(DeclareLaunchArgument(
       'world',
       default_value='rmuc_2025_world.sdf',
       description='指定要加载的Gazebo世界文件（需放在gazebo_sim/world目录下）'
   ))


   gazebo_action = OpaqueFunction(
       function=create_gazebo_action,
       args=[package_name] 
   )
   ld.add_action(gazebo_action)




   pause = ExecuteProcess(
       cmd=['sleep', '6'],
       output='screen'
   )
   ld.add_action(pause)


   go2_sensors_launch = OpaqueFunction(function=choose_launch_file)


   launch_after_pause = RegisterEventHandler(
       event_handler=OnProcessExit(
           target_action=pause,
           on_exit=[go2_sensors_launch]
       )
   )
   ld.add_action(launch_after_pause)


   return ld




