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
CMAKE_BINARY_DIR = /Users/ksl/Desktop/Kraken/bin

# Include any dependencies generated for this target.
include CMakeFiles/and.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/and.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/and.dir/flags.make

CMakeFiles/and.dir/test/and.cpp.o: CMakeFiles/and.dir/flags.make
CMakeFiles/and.dir/test/and.cpp.o: ../test/and.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ksl/Desktop/Kraken/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/and.dir/test/and.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/and.dir/test/and.cpp.o -c /Users/ksl/Desktop/Kraken/test/and.cpp

CMakeFiles/and.dir/test/and.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/and.dir/test/and.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ksl/Desktop/Kraken/test/and.cpp > CMakeFiles/and.dir/test/and.cpp.i

CMakeFiles/and.dir/test/and.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/and.dir/test/and.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ksl/Desktop/Kraken/test/and.cpp -o CMakeFiles/and.dir/test/and.cpp.s

# Object files for target and
and_OBJECTS = \
"CMakeFiles/and.dir/test/and.cpp.o"

# External object files for target and
and_EXTERNAL_OBJECTS =

and: CMakeFiles/and.dir/test/and.cpp.o
and: CMakeFiles/and.dir/build.make
and: CMakeFiles/and.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ksl/Desktop/Kraken/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable and"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/and.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/and.dir/build: and

.PHONY : CMakeFiles/and.dir/build

CMakeFiles/and.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/and.dir/cmake_clean.cmake
.PHONY : CMakeFiles/and.dir/clean

CMakeFiles/and.dir/depend:
	cd /Users/ksl/Desktop/Kraken/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken /Users/ksl/Desktop/Kraken/bin /Users/ksl/Desktop/Kraken/bin /Users/ksl/Desktop/Kraken/bin/CMakeFiles/and.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/and.dir/depend

