cmake_minimum_required(VERSION 3.3)
project(lab5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hirtie.cpp Hirtie.h Valori.cpp Valori.h Actiuni.cpp Actiuni.h)
add_executable(lab5 ${SOURCE_FILES})