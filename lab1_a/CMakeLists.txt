cmake_minimum_required(VERSION 3.2)
project(Lab1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lab1 ${SOURCE_FILES} student.h student.cpp)