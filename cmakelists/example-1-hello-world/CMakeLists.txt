cmake_minimum_required(VERSION 3.10.2)

project (hello)

set(CMAKE_BUILD_TYPE Debug)

add_executable(hello-built-by-cmake main.cpp)