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
CMAKE_SOURCE_DIR = E:\bala\mine\Study_C\LS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\bala\mine\Study_C\LS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LS.dir/flags.make

CMakeFiles/LS.dir/demo2.c.obj: CMakeFiles/LS.dir/flags.make
CMakeFiles/LS.dir/demo2.c.obj: ../demo2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\bala\mine\Study_C\LS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LS.dir/demo2.c.obj"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LS.dir\demo2.c.obj   -c E:\bala\mine\Study_C\LS\demo2.c

CMakeFiles/LS.dir/demo2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LS.dir/demo2.c.i"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\bala\mine\Study_C\LS\demo2.c > CMakeFiles\LS.dir\demo2.c.i

CMakeFiles/LS.dir/demo2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LS.dir/demo2.c.s"
	D:\software\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\bala\mine\Study_C\LS\demo2.c -o CMakeFiles\LS.dir\demo2.c.s

# Object files for target LS
LS_OBJECTS = \
"CMakeFiles/LS.dir/demo2.c.obj"

# External object files for target LS
LS_EXTERNAL_OBJECTS =

LS.exe: CMakeFiles/LS.dir/demo2.c.obj
LS.exe: CMakeFiles/LS.dir/build.make
LS.exe: CMakeFiles/LS.dir/linklibs.rsp
LS.exe: CMakeFiles/LS.dir/objects1.rsp
LS.exe: CMakeFiles/LS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\bala\mine\Study_C\LS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LS.dir/build: LS.exe

.PHONY : CMakeFiles/LS.dir/build

CMakeFiles/LS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LS.dir/clean

CMakeFiles/LS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\bala\mine\Study_C\LS E:\bala\mine\Study_C\LS E:\bala\mine\Study_C\LS\cmake-build-debug E:\bala\mine\Study_C\LS\cmake-build-debug E:\bala\mine\Study_C\LS\cmake-build-debug\CMakeFiles\LS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LS.dir/depend

