cmake_minimum_required(VERSION 3.0.2)
project(plumbing_test)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  geometry_msgs
  turtlesim
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES plumbing_test
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)
add_executable(pub_twist src/pub_twist.cpp)
add_executable(sub_pose src/sub_pose.cpp)
add_executable(service_client src/service_client.cpp)
add_executable(param src/param.cpp)

 add_dependencies(pub_twist ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
 add_dependencies(sub_pose ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
 add_dependencies(service_client ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
 add_dependencies(param ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(pub_twist
  ${catkin_LIBRARIES}
)
target_link_libraries(sub_pose
  ${catkin_LIBRARIES}
)
target_link_libraries(service_client
  ${catkin_LIBRARIES}
)
target_link_libraries(param
  ${catkin_LIBRARIES}
)
