cmake_minimum_required(VERSION 3.16)
project(namespace)

set(CMAKE_CXX_STANDARD 14)

add_executable(namespace main.cpp NamespaceHeader.h)