cmake_minimum_required(VERSION 3.0.2)
project(rename_topic)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES rename_topic
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

 add_executable(topic_name src/topic_name.cpp)

target_link_libraries(topic_name
  ${catkin_LIBRARIES}
)