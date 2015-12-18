cmake_minimum_required(VERSION 3.3)
project(lab4_a)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ZiarElectronic.cpp ZiarElectronic.h Gazeta.cpp Gazeta.h Presa.cpp Presa.h)
add_executable(lab4_a ${SOURCE_FILES})