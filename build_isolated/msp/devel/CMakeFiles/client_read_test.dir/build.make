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
CMAKE_SOURCE_DIR = /pi_multiwii_ws/src/msp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /pi_multiwii_ws/build_isolated/msp/devel

# Include any dependencies generated for this target.
include CMakeFiles/client_read_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/client_read_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client_read_test.dir/flags.make

CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o: CMakeFiles/client_read_test.dir/flags.make
CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o: /pi_multiwii_ws/src/msp/examples/client_read_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/pi_multiwii_ws/build_isolated/msp/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o -c /pi_multiwii_ws/src/msp/examples/client_read_test.cpp

CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /pi_multiwii_ws/src/msp/examples/client_read_test.cpp > CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.i

CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /pi_multiwii_ws/src/msp/examples/client_read_test.cpp -o CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.s

# Object files for target client_read_test
client_read_test_OBJECTS = \
"CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o"

# External object files for target client_read_test
client_read_test_EXTERNAL_OBJECTS =

client_read_test: CMakeFiles/client_read_test.dir/examples/client_read_test.cpp.o
client_read_test: CMakeFiles/client_read_test.dir/build.make
client_read_test: libmspclient.so
client_read_test: CMakeFiles/client_read_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/pi_multiwii_ws/build_isolated/msp/devel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable client_read_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_read_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client_read_test.dir/build: client_read_test

.PHONY : CMakeFiles/client_read_test.dir/build

CMakeFiles/client_read_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client_read_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client_read_test.dir/clean

CMakeFiles/client_read_test.dir/depend:
	cd /pi_multiwii_ws/build_isolated/msp/devel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /pi_multiwii_ws/src/msp /pi_multiwii_ws/src/msp /pi_multiwii_ws/build_isolated/msp/devel /pi_multiwii_ws/build_isolated/msp/devel /pi_multiwii_ws/build_isolated/msp/devel/CMakeFiles/client_read_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client_read_test.dir/depend

