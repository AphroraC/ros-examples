cmake_minimum_required(VERSION 3.0.2)
project(plumbing_pub_sub)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

## Generate messages in the 'msg' folder
 add_message_files(
  FILES
   person.msg
 )

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES plumbing_pub_sub
  CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

 add_executable(pub src/pub.cpp)
 add_executable(sub src/sub.cpp)
 add_executable(pub_person src/pub_person.cpp)
 add_executable(sub_person src/sub_person.cpp)

add_dependencies(pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
add_dependencies(pub_person ${PROJECT_NAME}_generate_messages_cpp)
add_dependencies(sub_person ${PROJECT_NAME}_generate_messages_cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(pub
   ${catkin_LIBRARIES}
 )
 target_link_libraries(sub
   ${catkin_LIBRARIES}
 )
 target_link_libraries(pub_person
   ${catkin_LIBRARIES}
 )
 target_link_libraries(sub_person
   ${catkin_LIBRARIES}
 )
