cmake_minimum_required(VERSION 3.0.2)
project(plugin_demo)

find_package(catkin REQUIRED COMPONENTS
  pluginlib
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES plugin_demo
#  CATKIN_DEPENDS pluginlib roscpp
#  DEPENDS system_lib
)

include_directories(
include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
add_library(plus src/polygon_plus.cpp)
add_executable(use_plus src/use_plus.cpp)

add_dependencies(use_plus ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
target_link_libraries(use_plus
  ${catkin_LIBRARIES}
)
