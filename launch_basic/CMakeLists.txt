cmake_minimum_required(VERSION 3.0.2)
project(launch_basic)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  turtlesim
)
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES launch_basic
#  CATKIN_DEPENDS roscpp rospy std_msgs turtlesim
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
