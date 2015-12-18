cmake_minimum_required(VERSION 3.3)
project(lab2_b)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Objet.cpp Objet.h)
add_executable(lab2_b ${SOURCE_FILES})