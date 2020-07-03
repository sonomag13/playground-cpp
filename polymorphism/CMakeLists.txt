# cmake version
cmake_minimum_required(VERSION 3.10)

# project name and version
project(learning-polymorphism VERSION 1.0)

# setup the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# include directory
include_directories(include)

# set the files global
file(GLOB SOURCES src/*.cpp)

# create the executable fiel
add_executable(poly ${SOURCES})
