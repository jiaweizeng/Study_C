# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\software\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\bala\mine\Study_C\C1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\bala\mine\Study_C\C1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C1.dir/flags.make

CMakeFiles/C1.dir/main3.c.obj: CMakeFiles/C1.dir/flags.make
CMakeFiles/C1.dir/main3.c.obj: ../main3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\bala\mine\Study_C\C1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C1.dir/main3.c.obj"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\C1.dir\main3.c.obj   -c E:\bala\mine\Study_C\C1\main3.c

CMakeFiles/C1.dir/main3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C1.dir/main3.c.i"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\bala\mine\Study_C\C1\main3.c > CMakeFiles\C1.dir\main3.c.i

CMakeFiles/C1.dir/main3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C1.dir/main3.c.s"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\bala\mine\Study_C\C1\main3.c -o CMakeFiles\C1.dir\main3.c.s

# Object files for target C1
C1_OBJECTS = \
"CMakeFiles/C1.dir/main3.c.obj"

# External object files for target C1
C1_EXTERNAL_OBJECTS =

C1.exe: CMakeFiles/C1.dir/main3.c.obj
C1.exe: CMakeFiles/C1.dir/build.make
C1.exe: CMakeFiles/C1.dir/linklibs.rsp
C1.exe: CMakeFiles/C1.dir/objects1.rsp
C1.exe: CMakeFiles/C1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\bala\mine\Study_C\C1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C1.dir/build: C1.exe

.PHONY : CMakeFiles/C1.dir/build

CMakeFiles/C1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C1.dir/clean

CMakeFiles/C1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\bala\mine\Study_C\C1 E:\bala\mine\Study_C\C1 E:\bala\mine\Study_C\C1\cmake-build-debug E:\bala\mine\Study_C\C1\cmake-build-debug E:\bala\mine\Study_C\C1\cmake-build-debug\CMakeFiles\C1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C1.dir/depend
