cmake_minimum_required(VERSION 3.0.2)
project(tf_static)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  rospy
  std_msgs
  tf2
  tf2_geometry_msgs
  tf2_ros
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES tf_static
#  CATKIN_DEPENDS geometry_msgs roscpp rospy std_msgs tf2 tf2_geometry_msgs tf2_ros
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(static_pub src/static_pub.cpp)
add_executable(static_sub src/static_sub.cpp)

add_dependencies(static_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(static_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(static_pub
  ${catkin_LIBRARIES}
)
target_link_libraries(static_sub
  ${catkin_LIBRARIES}
)
