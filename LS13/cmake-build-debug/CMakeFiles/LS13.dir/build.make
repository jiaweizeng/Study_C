# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /cygdrive/c/Users/92813/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/92813/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/bala/mine/Study_C/LS13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LS13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LS13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LS13.dir/flags.make

CMakeFiles/LS13.dir/main.cpp.o: CMakeFiles/LS13.dir/flags.make
CMakeFiles/LS13.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LS13.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LS13.dir/main.cpp.o -c /cygdrive/e/bala/mine/Study_C/LS13/main.cpp

CMakeFiles/LS13.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LS13.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/bala/mine/Study_C/LS13/main.cpp > CMakeFiles/LS13.dir/main.cpp.i

CMakeFiles/LS13.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LS13.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/bala/mine/Study_C/LS13/main.cpp -o CMakeFiles/LS13.dir/main.cpp.s

# Object files for target LS13
LS13_OBJECTS = \
"CMakeFiles/LS13.dir/main.cpp.o"

# External object files for target LS13
LS13_EXTERNAL_OBJECTS =

LS13.exe: CMakeFiles/LS13.dir/main.cpp.o
LS13.exe: CMakeFiles/LS13.dir/build.make
LS13.exe: CMakeFiles/LS13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LS13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LS13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LS13.dir/build: LS13.exe

.PHONY : CMakeFiles/LS13.dir/build

CMakeFiles/LS13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LS13.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LS13.dir/clean

CMakeFiles/LS13.dir/depend:
	cd /cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/bala/mine/Study_C/LS13 /cygdrive/e/bala/mine/Study_C/LS13 /cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug /cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug /cygdrive/e/bala/mine/Study_C/LS13/cmake-build-debug/CMakeFiles/LS13.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LS13.dir/depend

