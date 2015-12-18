cmake_minimum_required(VERSION 3.3)
project(lab3_a)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Time.cpp Time.h)
add_executable(lab3_a ${SOURCE_FILES})