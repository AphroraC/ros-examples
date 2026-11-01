cmake_minimum_required(VERSION 3.0.2)
project(tf_test)

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
#  LIBRARIES tf_test
#  CATKIN_DEPENDS geometry_msgs roscpp rospy std_msgs tf2 tf2_geometry_msgs tf2_ros turtlesim
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(new_turtle src/new_turtle.cpp)
add_executable(pub_turtle src/pub_turtle.cpp)
add_executable(control_turtle src/control_turtle.cpp)

add_dependencies(new_turtle ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(pub_turtle ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(control_turtle ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(new_turtle
  ${catkin_LIBRARIES}
)
target_link_libraries(pub_turtle
  ${catkin_LIBRARIES}
)
target_link_libraries(control_turtle
  ${catkin_LIBRARIES}
)