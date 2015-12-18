cmake_minimum_required(VERSION 3.3)
project(Lab3_b)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Queuer.cpp Queuer.h)
add_executable(Lab3_b ${SOURCE_FILES})