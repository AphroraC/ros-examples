cmake_minimum_required(VERSION 3.0.2)
project(nodelet_demo)

find_package(catkin REQUIRED COMPONENTS
  nodelet
  pluginlib
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES nodelet_demo
#  CATKIN_DEPENDS nodelet pluginlib roscpp
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
add_library(myplus
  src/myplus.cpp
)