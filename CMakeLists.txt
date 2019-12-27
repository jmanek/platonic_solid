cmake_minimum_required(VERSION 2.6)

project(platonic_solid)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fpermissive -pthread")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os")

include_directories(external/libigl/include)
include_directories(external/eigen)

include_directories(include)
add_executable(platonic_solid test/main.cpp)
