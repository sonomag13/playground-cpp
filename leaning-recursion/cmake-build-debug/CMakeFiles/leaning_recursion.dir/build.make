# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/lgao/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/lgao/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/lgao/Desktop/learning algo/leaning-recursion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/leaning_recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leaning_recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leaning_recursion.dir/flags.make

CMakeFiles/leaning_recursion.dir/main.cpp.o: CMakeFiles/leaning_recursion.dir/flags.make
CMakeFiles/leaning_recursion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leaning_recursion.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leaning_recursion.dir/main.cpp.o -c "/home/lgao/Desktop/learning algo/leaning-recursion/main.cpp"

CMakeFiles/leaning_recursion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leaning_recursion.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/lgao/Desktop/learning algo/leaning-recursion/main.cpp" > CMakeFiles/leaning_recursion.dir/main.cpp.i

CMakeFiles/leaning_recursion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leaning_recursion.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/lgao/Desktop/learning algo/leaning-recursion/main.cpp" -o CMakeFiles/leaning_recursion.dir/main.cpp.s

# Object files for target leaning_recursion
leaning_recursion_OBJECTS = \
"CMakeFiles/leaning_recursion.dir/main.cpp.o"

# External object files for target leaning_recursion
leaning_recursion_EXTERNAL_OBJECTS =

leaning_recursion: CMakeFiles/leaning_recursion.dir/main.cpp.o
leaning_recursion: CMakeFiles/leaning_recursion.dir/build.make
leaning_recursion: CMakeFiles/leaning_recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leaning_recursion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leaning_recursion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leaning_recursion.dir/build: leaning_recursion

.PHONY : CMakeFiles/leaning_recursion.dir/build

CMakeFiles/leaning_recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leaning_recursion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leaning_recursion.dir/clean

CMakeFiles/leaning_recursion.dir/depend:
	cd "/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/lgao/Desktop/learning algo/leaning-recursion" "/home/lgao/Desktop/learning algo/leaning-recursion" "/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug" "/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug" "/home/lgao/Desktop/learning algo/leaning-recursion/cmake-build-debug/CMakeFiles/leaning_recursion.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/leaning_recursion.dir/depend

