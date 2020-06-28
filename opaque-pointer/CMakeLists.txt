cmake_minimum_required(VERSION 3.16)
project(opaque_pointer C)

set(CMAKE_C_STANDARD 99)

add_executable(opaque_pointer main.c array_api.h array.c)