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
CMAKE_SOURCE_DIR = /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build

# Include any dependencies generated for this target.
include CMakeFiles/ogg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ogg.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ogg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ogg.dir/flags.make

CMakeFiles/ogg.dir/src/bitwise.c.o: CMakeFiles/ogg.dir/flags.make
CMakeFiles/ogg.dir/src/bitwise.c.o: ../src/bitwise.c
CMakeFiles/ogg.dir/src/bitwise.c.o: CMakeFiles/ogg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ogg.dir/src/bitwise.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ogg.dir/src/bitwise.c.o -MF CMakeFiles/ogg.dir/src/bitwise.c.o.d -o CMakeFiles/ogg.dir/src/bitwise.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/bitwise.c

CMakeFiles/ogg.dir/src/bitwise.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ogg.dir/src/bitwise.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/bitwise.c > CMakeFiles/ogg.dir/src/bitwise.c.i

CMakeFiles/ogg.dir/src/bitwise.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ogg.dir/src/bitwise.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/bitwise.c -o CMakeFiles/ogg.dir/src/bitwise.c.s

CMakeFiles/ogg.dir/src/framing.c.o: CMakeFiles/ogg.dir/flags.make
CMakeFiles/ogg.dir/src/framing.c.o: ../src/framing.c
CMakeFiles/ogg.dir/src/framing.c.o: CMakeFiles/ogg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ogg.dir/src/framing.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ogg.dir/src/framing.c.o -MF CMakeFiles/ogg.dir/src/framing.c.o.d -o CMakeFiles/ogg.dir/src/framing.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/framing.c

CMakeFiles/ogg.dir/src/framing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ogg.dir/src/framing.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/framing.c > CMakeFiles/ogg.dir/src/framing.c.i

CMakeFiles/ogg.dir/src/framing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ogg.dir/src/framing.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/src/framing.c -o CMakeFiles/ogg.dir/src/framing.c.s

# Object files for target ogg
ogg_OBJECTS = \
"CMakeFiles/ogg.dir/src/bitwise.c.o" \
"CMakeFiles/ogg.dir/src/framing.c.o"

# External object files for target ogg
ogg_EXTERNAL_OBJECTS =

libogg.a: CMakeFiles/ogg.dir/src/bitwise.c.o
libogg.a: CMakeFiles/ogg.dir/src/framing.c.o
libogg.a: CMakeFiles/ogg.dir/build.make
libogg.a: CMakeFiles/ogg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libogg.a"
	$(CMAKE_COMMAND) -P CMakeFiles/ogg.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ogg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ogg.dir/build: libogg.a
.PHONY : CMakeFiles/ogg.dir/build

CMakeFiles/ogg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ogg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ogg.dir/clean

CMakeFiles/ogg.dir/depend:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5 /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5 /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/libogg-1.3.5/build/CMakeFiles/ogg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ogg.dir/depend
