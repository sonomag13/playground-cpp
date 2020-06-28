cmake_minimum_required(VERSION 3.10.2)
project(static_variable)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set(SOURCE src/main.cpp src/DummyClass.cpp)

file(GLOB SOURCE, "src/*.cpp")

add_executable(dummy ${SOURCE})