cmake_minimum_required(VERSION 3.0.2)
project(plumbing_param_server)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES plumbing_param_server
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(param_set src/param_set.cpp)
add_executable(param_get src/param_get.cpp)
add_executable(param_del src/param_del.cpp)

target_link_libraries(param_set
  ${catkin_LIBRARIES}
)
target_link_libraries(param_get
  ${catkin_LIBRARIES}
)
target_link_libraries(param_del
  ${catkin_LIBRARIES}
)
