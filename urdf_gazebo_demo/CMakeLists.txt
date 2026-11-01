cmake_minimum_required(VERSION 3.0.2)
project(urdf_gazebo_demo)

find_package(catkin REQUIRED COMPONENTS
  gazebo_plugins
  gazebo_ros
  gazebo_ros_control
  urdf
  xacro
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES urdf_gazebo_demo
#  CATKIN_DEPENDS gazebo_plugins gazebo_ros gazebo_ros_control urdf xacro
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)