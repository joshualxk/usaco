cmake_minimum_required(VERSION 3.8)
project(usaco)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D __JOSHUA")
set(SOURCE_FILES main.cpp)
add_executable(usaco ${SOURCE_FILES})