cmake_minimum_required(VERSION 3.6)
project(Homework3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES parte3.c)
add_executable(Homework3 ${SOURCE_FILES})