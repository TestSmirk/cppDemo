cmake_minimum_required(VERSION 3.7)
project(testcpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp while.cpp while.h)
add_executable(testcpp ${SOURCE_FILES})