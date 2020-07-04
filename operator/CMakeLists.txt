cmake_minimum_required(VERSION 3.10)

project(operator)

include_directories(include)

set(SOURCES src/main.cpp, src/Helper.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(operator ${SOURCES})