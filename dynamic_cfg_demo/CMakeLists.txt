cmake_minimum_required(VERSION 3.0.2)
project(dynamic_cfg_demo)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  dynamic_reconfigure
)


## Generate dynamic reconfigure parameters in the 'cfg' folder
generate_dynamic_reconfigure_options(
  cfg/dr.cfg
)
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES dynamic_cfg_demo
 CATKIN_DEPENDS dynamic_reconfigure roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(dr_server src/dr_server.cpp)

add_dependencies(dr_server ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(dr_server
  ${catkin_LIBRARIES}
)
