cmake_minimum_required(VERSION 3.0.2)
project(tf_dynamic)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  rospy
  std_msgs
  tf2
  tf2_geometry_msgs
  tf2_ros
  turtlesim
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES tf_dynamic
#  CATKIN_DEPENDS geometry_msgs roscpp rospy std_msgs tf2 tf2_geometry_msgs tf2_ros turtlesim
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(dynamic_pub src/dynamic_pub.cpp)
add_executable(dynamic_sub src/dynamic_sub.cpp)

add_dependencies(dynamic_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(dynamic_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(dynamic_pub
  ${catkin_LIBRARIES}
)
target_link_libraries(dynamic_sub
  ${catkin_LIBRARIES}
)
