cmake_minimum_required(VERSION 3.6)
project(untitled3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(untitled3 ${SOURCE_FILES})