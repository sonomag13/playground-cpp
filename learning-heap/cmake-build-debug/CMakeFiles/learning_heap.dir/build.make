# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/strobe/playground-cpp/learning-heap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/strobe/playground-cpp/learning-heap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learning_heap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learning_heap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learning_heap.dir/flags.make

CMakeFiles/learning_heap.dir/main.cpp.o: CMakeFiles/learning_heap.dir/flags.make
CMakeFiles/learning_heap.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/strobe/playground-cpp/learning-heap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learning_heap.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/learning_heap.dir/main.cpp.o -c /home/strobe/playground-cpp/learning-heap/main.cpp

CMakeFiles/learning_heap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learning_heap.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/strobe/playground-cpp/learning-heap/main.cpp > CMakeFiles/learning_heap.dir/main.cpp.i

CMakeFiles/learning_heap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learning_heap.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/strobe/playground-cpp/learning-heap/main.cpp -o CMakeFiles/learning_heap.dir/main.cpp.s

# Object files for target learning_heap
learning_heap_OBJECTS = \
"CMakeFiles/learning_heap.dir/main.cpp.o"

# External object files for target learning_heap
learning_heap_EXTERNAL_OBJECTS =

learning_heap: CMakeFiles/learning_heap.dir/main.cpp.o
learning_heap: CMakeFiles/learning_heap.dir/build.make
learning_heap: CMakeFiles/learning_heap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/strobe/playground-cpp/learning-heap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable learning_heap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learning_heap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learning_heap.dir/build: learning_heap

.PHONY : CMakeFiles/learning_heap.dir/build

CMakeFiles/learning_heap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learning_heap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learning_heap.dir/clean

CMakeFiles/learning_heap.dir/depend:
	cd /home/strobe/playground-cpp/learning-heap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/strobe/playground-cpp/learning-heap /home/strobe/playground-cpp/learning-heap /home/strobe/playground-cpp/learning-heap/cmake-build-debug /home/strobe/playground-cpp/learning-heap/cmake-build-debug /home/strobe/playground-cpp/learning-heap/cmake-build-debug/CMakeFiles/learning_heap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learning_heap.dir/depend

