cmake_minimum_required(VERSION 3.10.2)
project(directory_test)
 
# declare directory of headers
include_directories(include)
 
# Can manually add the sources using the set command as follows:
set(SOURCES src/main.cpp src/Person.cpp)

file(GLOB SOURCES "src/*.cpp")
 
add_executable(hello_person ${SOURCES})