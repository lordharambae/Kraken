# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ksl/Desktop/Kraken

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ksl/Desktop/Kraken

# Include any dependencies generated for this target.
include CMakeFiles/or.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/or.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/or.dir/flags.make

CMakeFiles/or.dir/test/or.cpp.o: CMakeFiles/or.dir/flags.make
CMakeFiles/or.dir/test/or.cpp.o: test/or.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ksl/Desktop/Kraken/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/or.dir/test/or.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/or.dir/test/or.cpp.o -c /Users/ksl/Desktop/Kraken/test/or.cpp

CMakeFiles/or.dir/test/or.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/or.dir/test/or.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ksl/Desktop/Kraken/test/or.cpp > CMakeFiles/or.dir/test/or.cpp.i

CMakeFiles/or.dir/test/or.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/or.dir/test/or.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ksl/Desktop/Kraken/test/or.cpp -o CMakeFiles/or.dir/test/or.cpp.s

# Object files for target or
or_OBJECTS = \
"CMakeFiles/or.dir/test/or.cpp.o"

# External object files for target or
or_EXTERNAL_OBJECTS =

or: CMakeFiles/or.dir/test/or.cpp.o
or: CMakeFiles/or.dir/build.make
or: CMakeFiles/or.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ksl/Desktop/Kraken/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable or"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/or.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/or.dir/build: or

.PHONY : CMakeFiles/or.dir/build

CMakeFiles/or.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/or.dir/cmake_clean.cmake
.PHONY : CMakeFiles/or.dir/clean

CMakeFiles/or.dir/depend:
	cd /Users/ksl/Desktop/Kraken && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken/CMakeFiles/or.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/or.dir/depend

