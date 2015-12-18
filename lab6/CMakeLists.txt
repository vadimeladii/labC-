cmake_minimum_required(VERSION 3.3)
project(lab6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Number.h Complex.cpp Complex.h Vector.cpp Vector.h Matrix.h Matrix.cpp)
add_executable(lab6 ${SOURCE_FILES})