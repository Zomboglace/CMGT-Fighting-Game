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
include src/test_libFLAC/CMakeFiles/test_libFLAC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.make

# Include the progress variables for this target.
include src/test_libFLAC/CMakeFiles/test_libFLAC.dir/progress.make

# Include the compile flags for this target's objects.
include src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o: ../src/test_libFLAC/bitreader.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o -MF CMakeFiles/test_libFLAC.dir/bitreader.c.o.d -o CMakeFiles/test_libFLAC.dir/bitreader.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitreader.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/bitreader.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitreader.c > CMakeFiles/test_libFLAC.dir/bitreader.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/bitreader.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitreader.c -o CMakeFiles/test_libFLAC.dir/bitreader.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o: ../src/test_libFLAC/bitwriter.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o -MF CMakeFiles/test_libFLAC.dir/bitwriter.c.o.d -o CMakeFiles/test_libFLAC.dir/bitwriter.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitwriter.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/bitwriter.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitwriter.c > CMakeFiles/test_libFLAC.dir/bitwriter.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/bitwriter.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/bitwriter.c -o CMakeFiles/test_libFLAC.dir/bitwriter.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o: ../src/test_libFLAC/crc.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o -MF CMakeFiles/test_libFLAC.dir/crc.c.o.d -o CMakeFiles/test_libFLAC.dir/crc.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/crc.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/crc.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/crc.c > CMakeFiles/test_libFLAC.dir/crc.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/crc.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/crc.c -o CMakeFiles/test_libFLAC.dir/crc.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o: ../src/test_libFLAC/decoders.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o -MF CMakeFiles/test_libFLAC.dir/decoders.c.o.d -o CMakeFiles/test_libFLAC.dir/decoders.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/decoders.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/decoders.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/decoders.c > CMakeFiles/test_libFLAC.dir/decoders.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/decoders.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/decoders.c -o CMakeFiles/test_libFLAC.dir/decoders.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o: ../src/test_libFLAC/encoders.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o -MF CMakeFiles/test_libFLAC.dir/encoders.c.o.d -o CMakeFiles/test_libFLAC.dir/encoders.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/encoders.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/encoders.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/encoders.c > CMakeFiles/test_libFLAC.dir/encoders.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/encoders.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/encoders.c -o CMakeFiles/test_libFLAC.dir/encoders.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o: ../src/test_libFLAC/endswap.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o -MF CMakeFiles/test_libFLAC.dir/endswap.c.o.d -o CMakeFiles/test_libFLAC.dir/endswap.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/endswap.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/endswap.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/endswap.c > CMakeFiles/test_libFLAC.dir/endswap.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/endswap.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/endswap.c -o CMakeFiles/test_libFLAC.dir/endswap.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o: ../src/test_libFLAC/format.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o -MF CMakeFiles/test_libFLAC.dir/format.c.o.d -o CMakeFiles/test_libFLAC.dir/format.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/format.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/format.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/format.c > CMakeFiles/test_libFLAC.dir/format.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/format.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/format.c -o CMakeFiles/test_libFLAC.dir/format.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o: ../src/test_libFLAC/main.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o -MF CMakeFiles/test_libFLAC.dir/main.c.o.d -o CMakeFiles/test_libFLAC.dir/main.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/main.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/main.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/main.c > CMakeFiles/test_libFLAC.dir/main.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/main.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/main.c -o CMakeFiles/test_libFLAC.dir/main.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o: ../src/test_libFLAC/metadata.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o -MF CMakeFiles/test_libFLAC.dir/metadata.c.o.d -o CMakeFiles/test_libFLAC.dir/metadata.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/metadata.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata.c > CMakeFiles/test_libFLAC.dir/metadata.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/metadata.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata.c -o CMakeFiles/test_libFLAC.dir/metadata.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o: ../src/test_libFLAC/metadata_manip.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o -MF CMakeFiles/test_libFLAC.dir/metadata_manip.c.o.d -o CMakeFiles/test_libFLAC.dir/metadata_manip.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_manip.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/metadata_manip.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_manip.c > CMakeFiles/test_libFLAC.dir/metadata_manip.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/metadata_manip.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_manip.c -o CMakeFiles/test_libFLAC.dir/metadata_manip.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o: ../src/test_libFLAC/metadata_object.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o -MF CMakeFiles/test_libFLAC.dir/metadata_object.c.o.d -o CMakeFiles/test_libFLAC.dir/metadata_object.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_object.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/metadata_object.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_object.c > CMakeFiles/test_libFLAC.dir/metadata_object.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/metadata_object.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/metadata_object.c -o CMakeFiles/test_libFLAC.dir/metadata_object.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o: ../src/test_libFLAC/md5.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o -MF CMakeFiles/test_libFLAC.dir/md5.c.o.d -o CMakeFiles/test_libFLAC.dir/md5.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/md5.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/md5.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/md5.c > CMakeFiles/test_libFLAC.dir/md5.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/md5.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC/md5.c -o CMakeFiles/test_libFLAC.dir/md5.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o: ../src/libFLAC/bitreader.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o -MF CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o.d -o CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitreader.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitreader.c > CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitreader.c -o CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o: ../src/libFLAC/bitwriter.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o -MF CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o.d -o CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitwriter.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitwriter.c > CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/bitwriter.c -o CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o: ../src/libFLAC/crc.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o -MF CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o.d -o CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/crc.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/crc.c > CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/crc.c -o CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.s

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/flags.make
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o: ../src/libFLAC/md5.c
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o -MF CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o.d -o CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/md5.c

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/md5.c > CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.i

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/libFLAC/md5.c -o CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.s

# Object files for target test_libFLAC
test_libFLAC_OBJECTS = \
"CMakeFiles/test_libFLAC.dir/bitreader.c.o" \
"CMakeFiles/test_libFLAC.dir/bitwriter.c.o" \
"CMakeFiles/test_libFLAC.dir/crc.c.o" \
"CMakeFiles/test_libFLAC.dir/decoders.c.o" \
"CMakeFiles/test_libFLAC.dir/encoders.c.o" \
"CMakeFiles/test_libFLAC.dir/endswap.c.o" \
"CMakeFiles/test_libFLAC.dir/format.c.o" \
"CMakeFiles/test_libFLAC.dir/main.c.o" \
"CMakeFiles/test_libFLAC.dir/metadata.c.o" \
"CMakeFiles/test_libFLAC.dir/metadata_manip.c.o" \
"CMakeFiles/test_libFLAC.dir/metadata_object.c.o" \
"CMakeFiles/test_libFLAC.dir/md5.c.o" \
"CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o" \
"CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o" \
"CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o" \
"CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o"

# External object files for target test_libFLAC
test_libFLAC_EXTERNAL_OBJECTS =

src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitreader.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/bitwriter.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/crc.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/decoders.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/encoders.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/endswap.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/format.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/main.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_manip.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/metadata_object.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/md5.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitreader.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/bitwriter.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/crc.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/__/libFLAC/md5.c.o
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/build.make
src/test_libFLAC/test_libFLAC: src/share/grabbag/libgrabbag.a
src/test_libFLAC/test_libFLAC: src/test_libs_common/libtest_libs_common.a
src/test_libFLAC/test_libFLAC: src/share/replaygain_analysis/libreplaygain_analysis.a
src/test_libFLAC/test_libFLAC: src/libFLAC/libFLAC.so.12.1.0
src/test_libFLAC/test_libFLAC: /usr/lib/x86_64-linux-gnu/libogg.so
src/test_libFLAC/test_libFLAC: src/test_libFLAC/CMakeFiles/test_libFLAC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking C executable test_libFLAC"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_libFLAC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test_libFLAC/CMakeFiles/test_libFLAC.dir/build: src/test_libFLAC/test_libFLAC
.PHONY : src/test_libFLAC/CMakeFiles/test_libFLAC.dir/build

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/clean:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC && $(CMAKE_COMMAND) -P CMakeFiles/test_libFLAC.dir/cmake_clean.cmake
.PHONY : src/test_libFLAC/CMakeFiles/test_libFLAC.dir/clean

src/test_libFLAC/CMakeFiles/test_libFLAC.dir/depend:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3 /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/test_libFLAC /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC/CMakeFiles/test_libFLAC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/test_libFLAC/CMakeFiles/test_libFLAC.dir/depend
