cmake_minimum_required(VERSION 3.10.2)
project(build_shared_object)
set(CMAKE_BUILD_TYPE Release)

# headers
include_directories(include)

# global
file(GLOB SOURCES "src/Person.cpp")

#Generate the shared library from the sources
add_library(hello SHARED ${SOURCES})

# Set the location for library installation, e.g. /usr/lib
# Use "sudo make install" to apply
install(TARGETS hello DESTINATION /usr/lib)