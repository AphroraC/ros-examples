cmake_minimum_required(VERSION 3.0.2)
project(plumbing_apis)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES plumbing_apis
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(apis_pub src/apis_pub.cpp)
add_executable(apis_sub src/apis_sub.cpp)
add_executable(apis_time src/apis_time.cpp)

add_dependencies(apis_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(apis_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(apis_time ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(apis_pub
  ${catkin_LIBRARIES}
)
target_link_libraries(apis_sub
  ${catkin_LIBRARIES}
)
target_link_libraries(apis_time
  ${catkin_LIBRARIES}
)