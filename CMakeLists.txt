cmake_minimum_required(VERSION 3.29)
project(Lab5fr)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab5fr
    analyzer.cpp
    StringData.h)
