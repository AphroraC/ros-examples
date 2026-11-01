cmake_minimum_required(VERSION 3.0.2)
project(nav_demo)

find_package(catkin REQUIRED COMPONENTS
  amcl
  gmapping
  map_server
  move_base
)
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES nav_demo
#  CATKIN_DEPENDS amcl gmapping map_server move_base
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
