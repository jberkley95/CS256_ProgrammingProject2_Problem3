# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/flags.make

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/flags.make
CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o: ../NumberConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o -c /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/NumberConverter.cpp

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/NumberConverter.cpp > CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.i

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/NumberConverter.cpp -o CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.s

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.requires:

.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.requires

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.provides: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/build.make CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.provides.build
.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.provides

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.provides.build: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o


# Object files for target CS256_ProgrammingProject2_Problem3
CS256_ProgrammingProject2_Problem3_OBJECTS = \
"CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o"

# External object files for target CS256_ProgrammingProject2_Problem3
CS256_ProgrammingProject2_Problem3_EXTERNAL_OBJECTS =

CS256_ProgrammingProject2_Problem3: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o
CS256_ProgrammingProject2_Problem3: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/build.make
CS256_ProgrammingProject2_Problem3: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CS256_ProgrammingProject2_Problem3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/build: CS256_ProgrammingProject2_Problem3

.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/build

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/requires: CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/NumberConverter.cpp.o.requires

.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/requires

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/clean

CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/depend:
	cd /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3 /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3 /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug /Users/jberkley_hackintosh/CLionProjects/CS256_ProgrammingProject2_Problem3/cmake-build-debug/CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS256_ProgrammingProject2_Problem3.dir/depend

