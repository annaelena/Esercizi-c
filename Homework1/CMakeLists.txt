cmake_minimum_required(VERSION 3.6)
project(Homework1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES es1.c es2.c es3.c es4.c es5.c)
add_executable(Homework1 ${SOURCE_FILES})