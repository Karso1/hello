# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\hello\328003

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\hello\328003\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/328003.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/328003.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/328003.dir/flags.make

CMakeFiles/328003.dir/main.c.obj: CMakeFiles/328003.dir/flags.make
CMakeFiles/328003.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\hello\328003\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/328003.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\328003.dir\main.c.obj -c E:\hello\328003\main.c

CMakeFiles/328003.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/328003.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\hello\328003\main.c > CMakeFiles\328003.dir\main.c.i

CMakeFiles/328003.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/328003.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\hello\328003\main.c -o CMakeFiles\328003.dir\main.c.s

# Object files for target 328003
328003_OBJECTS = \
"CMakeFiles/328003.dir/main.c.obj"

# External object files for target 328003
328003_EXTERNAL_OBJECTS =

328003.exe: CMakeFiles/328003.dir/main.c.obj
328003.exe: CMakeFiles/328003.dir/build.make
328003.exe: CMakeFiles/328003.dir/linklibs.rsp
328003.exe: CMakeFiles/328003.dir/objects1.rsp
328003.exe: CMakeFiles/328003.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\hello\328003\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 328003.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\328003.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/328003.dir/build: 328003.exe

.PHONY : CMakeFiles/328003.dir/build

CMakeFiles/328003.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\328003.dir\cmake_clean.cmake
.PHONY : CMakeFiles/328003.dir/clean

CMakeFiles/328003.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\hello\328003 E:\hello\328003 E:\hello\328003\cmake-build-debug E:\hello\328003\cmake-build-debug E:\hello\328003\cmake-build-debug\CMakeFiles\328003.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/328003.dir/depend

