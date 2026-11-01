cmake_minimum_required(VERSION 3.0.2)
project(myrosbag)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  rosbag
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES myrosbag
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(write_bag src/write_bag.cpp)
add_executable(read_bag src/read_bag.cpp)

add_dependencies(write_bag ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(read_bag ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

target_link_libraries(write_bag
  ${catkin_LIBRARIES}
)
target_link_libraries(read_bag
  ${catkin_LIBRARIES}
)