cmake_minimum_required(VERSION 3.3)
project(lab2_a)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Complex.cpp Complex.h)
add_executable(lab2_a ${SOURCE_FILES})