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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/john/Octomap/src/octomap-devel/dynamicEDT3D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/john/Octomap/build_isolated/dynamic_edt_3d/devel

# Include any dependencies generated for this target.
include src/examples/CMakeFiles/exampleEDTOctomap.dir/depend.make

# Include the progress variables for this target.
include src/examples/CMakeFiles/exampleEDTOctomap.dir/progress.make

# Include the compile flags for this target's objects.
include src/examples/CMakeFiles/exampleEDTOctomap.dir/flags.make

src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o: src/examples/CMakeFiles/exampleEDTOctomap.dir/flags.make
src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o: /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/examples/exampleEDTOctomap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/Octomap/build_isolated/dynamic_edt_3d/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o -c /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/examples/exampleEDTOctomap.cpp

src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.i"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/examples/exampleEDTOctomap.cpp > CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.i

src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.s"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/examples/exampleEDTOctomap.cpp -o CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.s

# Object files for target exampleEDTOctomap
exampleEDTOctomap_OBJECTS = \
"CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o"

# External object files for target exampleEDTOctomap
exampleEDTOctomap_EXTERNAL_OBJECTS =

/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: src/examples/CMakeFiles/exampleEDTOctomap.dir/exampleEDTOctomap.cpp.o
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: src/examples/CMakeFiles/exampleEDTOctomap.dir/build.make
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: /home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.so.1.9.8
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: /home/john/Octomap/devel_isolated/octomap/lib/liboctomap.so
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: /home/john/Octomap/devel_isolated/octomap/lib/liboctomath.so
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap: src/examples/CMakeFiles/exampleEDTOctomap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john/Octomap/build_isolated/dynamic_edt_3d/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exampleEDTOctomap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/examples/CMakeFiles/exampleEDTOctomap.dir/build: /home/john/Octomap/src/octomap-devel/dynamicEDT3D/bin/exampleEDTOctomap

.PHONY : src/examples/CMakeFiles/exampleEDTOctomap.dir/build

src/examples/CMakeFiles/exampleEDTOctomap.dir/clean:
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples && $(CMAKE_COMMAND) -P CMakeFiles/exampleEDTOctomap.dir/cmake_clean.cmake
.PHONY : src/examples/CMakeFiles/exampleEDTOctomap.dir/clean

src/examples/CMakeFiles/exampleEDTOctomap.dir/depend:
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john/Octomap/src/octomap-devel/dynamicEDT3D /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/examples /home/john/Octomap/build_isolated/dynamic_edt_3d/devel /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/examples/CMakeFiles/exampleEDTOctomap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/examples/CMakeFiles/exampleEDTOctomap.dir/depend

