cmake_minimum_required(VERSION 3.7)
project(outclassdef)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Teacher.cpp Teacher.h)
add_executable(outclassdef ${SOURCE_FILES})