cmake_minimum_required(VERSION 3.0.2)
project(gcov_ros_sample)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

# # gcov有効化方法1
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# # gcov有効化方法2
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

# # gcov有効化方法3
# catkin build -DCMAKE_CXX_FLAGS="${CMAKE_CXX_FLAGS} --coverage" -DCMAKE_EXE_LINKER_FLAGS="${CMAKE_EXE_LINKER_FLAGS} --coverage"
message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

set(TEST_TARGET_NAME "${PROJECT_NAME}_test")
catkin_add_gtest(${TEST_TARGET_NAME} hoge_test/gcov_test.cpp)
add_dependencies(${TEST_TARGET_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${TEST_TARGET_NAME} ${catkin_LIBRARIES})
