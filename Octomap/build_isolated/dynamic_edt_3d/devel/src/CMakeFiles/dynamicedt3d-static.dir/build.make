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
include src/CMakeFiles/dynamicedt3d-static.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/dynamicedt3d-static.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/dynamicedt3d-static.dir/flags.make

src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o: src/CMakeFiles/dynamicedt3d-static.dir/flags.make
src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o: /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/dynamicEDT3D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/Octomap/build_isolated/dynamic_edt_3d/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o -c /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/dynamicEDT3D.cpp

src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.i"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/dynamicEDT3D.cpp > CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.i

src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.s"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src/dynamicEDT3D.cpp -o CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.s

# Object files for target dynamicedt3d-static
dynamicedt3d__static_OBJECTS = \
"CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o"

# External object files for target dynamicedt3d-static
dynamicedt3d__static_EXTERNAL_OBJECTS =

/home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.a: src/CMakeFiles/dynamicedt3d-static.dir/dynamicEDT3D.cpp.o
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.a: src/CMakeFiles/dynamicedt3d-static.dir/build.make
/home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.a: src/CMakeFiles/dynamicedt3d-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john/Octomap/build_isolated/dynamic_edt_3d/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.a"
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && $(CMAKE_COMMAND) -P CMakeFiles/dynamicedt3d-static.dir/cmake_clean_target.cmake
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dynamicedt3d-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/dynamicedt3d-static.dir/build: /home/john/Octomap/src/octomap-devel/dynamicEDT3D/lib/libdynamicedt3d.a

.PHONY : src/CMakeFiles/dynamicedt3d-static.dir/build

src/CMakeFiles/dynamicedt3d-static.dir/clean:
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src && $(CMAKE_COMMAND) -P CMakeFiles/dynamicedt3d-static.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/dynamicedt3d-static.dir/clean

src/CMakeFiles/dynamicedt3d-static.dir/depend:
	cd /home/john/Octomap/build_isolated/dynamic_edt_3d/devel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john/Octomap/src/octomap-devel/dynamicEDT3D /home/john/Octomap/src/octomap-devel/dynamicEDT3D/src /home/john/Octomap/build_isolated/dynamic_edt_3d/devel /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src /home/john/Octomap/build_isolated/dynamic_edt_3d/devel/src/CMakeFiles/dynamicedt3d-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/dynamicedt3d-static.dir/depend

