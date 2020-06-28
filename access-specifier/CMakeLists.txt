# cmake version
cmake_minimum_required(VERSION 3.10.2)

# project name
project(learning-access-specifier VERSION 1.0)

# set build type that allows debug
set(CMAKE_BUILD_TYPE Debug)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include directories
include_directories(inlcude)

# set source file
file(GLOB SOURCES "src/*.cpp")

add_executable(access-specifier ${SOURCES})