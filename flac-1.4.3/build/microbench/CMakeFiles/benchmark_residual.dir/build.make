# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build

# Include any dependencies generated for this target.
include microbench/CMakeFiles/benchmark_residual.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include microbench/CMakeFiles/benchmark_residual.dir/compiler_depend.make

# Include the progress variables for this target.
include microbench/CMakeFiles/benchmark_residual.dir/progress.make

# Include the compile flags for this target's objects.
include microbench/CMakeFiles/benchmark_residual.dir/flags.make

microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o: microbench/CMakeFiles/benchmark_residual.dir/flags.make
microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o: ../microbench/benchmark_residual.c
microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o: microbench/CMakeFiles/benchmark_residual.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o -MF CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o.d -o CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/benchmark_residual.c

microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/benchmark_residual.dir/benchmark_residual.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/benchmark_residual.c > CMakeFiles/benchmark_residual.dir/benchmark_residual.c.i

microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/benchmark_residual.dir/benchmark_residual.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/benchmark_residual.c -o CMakeFiles/benchmark_residual.dir/benchmark_residual.c.s

microbench/CMakeFiles/benchmark_residual.dir/util.c.o: microbench/CMakeFiles/benchmark_residual.dir/flags.make
microbench/CMakeFiles/benchmark_residual.dir/util.c.o: ../microbench/util.c
microbench/CMakeFiles/benchmark_residual.dir/util.c.o: microbench/CMakeFiles/benchmark_residual.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object microbench/CMakeFiles/benchmark_residual.dir/util.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT microbench/CMakeFiles/benchmark_residual.dir/util.c.o -MF CMakeFiles/benchmark_residual.dir/util.c.o.d -o CMakeFiles/benchmark_residual.dir/util.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/util.c

microbench/CMakeFiles/benchmark_residual.dir/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/benchmark_residual.dir/util.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/util.c > CMakeFiles/benchmark_residual.dir/util.c.i

microbench/CMakeFiles/benchmark_residual.dir/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/benchmark_residual.dir/util.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench/util.c -o CMakeFiles/benchmark_residual.dir/util.c.s

# Object files for target benchmark_residual
benchmark_residual_OBJECTS = \
"CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o" \
"CMakeFiles/benchmark_residual.dir/util.c.o"

# External object files for target benchmark_residual
benchmark_residual_EXTERNAL_OBJECTS =

microbench/benchmark_residual: microbench/CMakeFiles/benchmark_residual.dir/benchmark_residual.c.o
microbench/benchmark_residual: microbench/CMakeFiles/benchmark_residual.dir/util.c.o
microbench/benchmark_residual: microbench/CMakeFiles/benchmark_residual.dir/build.make
microbench/benchmark_residual: src/libFLAC/libFLAC.so.12.1.0
microbench/benchmark_residual: /usr/lib/x86_64-linux-gnu/libogg.so
microbench/benchmark_residual: microbench/CMakeFiles/benchmark_residual.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable benchmark_residual"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/benchmark_residual.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
microbench/CMakeFiles/benchmark_residual.dir/build: microbench/benchmark_residual
.PHONY : microbench/CMakeFiles/benchmark_residual.dir/build

microbench/CMakeFiles/benchmark_residual.dir/clean:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench && $(CMAKE_COMMAND) -P CMakeFiles/benchmark_residual.dir/cmake_clean.cmake
.PHONY : microbench/CMakeFiles/benchmark_residual.dir/clean

microbench/CMakeFiles/benchmark_residual.dir/depend:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3 /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/microbench /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench/CMakeFiles/benchmark_residual.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : microbench/CMakeFiles/benchmark_residual.dir/depend

