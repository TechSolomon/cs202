cmake_minimum_required(VERSION 3.19)
project(rational)

set(CMAKE_CXX_STANDARD 14)

add_executable(rational rational.cpp rational.hpp templateTest.cpp)