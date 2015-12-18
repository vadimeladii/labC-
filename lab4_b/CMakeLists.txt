cmake_minimum_required(VERSION 3.3)
project(lab4_b)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Computer.cpp Computer.h Procesor.cpp Procesor.h)
add_executable(lab4_b ${SOURCE_FILES})