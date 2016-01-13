cmake_minimum_required(VERSION 2.8)
project(Lab1B)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lab1B ${SOURCE_FILES} myvector.h myvector.cpp)