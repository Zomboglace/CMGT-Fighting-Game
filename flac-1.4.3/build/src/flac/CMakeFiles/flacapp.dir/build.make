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
include src/flac/CMakeFiles/flacapp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/flac/CMakeFiles/flacapp.dir/compiler_depend.make

# Include the progress variables for this target.
include src/flac/CMakeFiles/flacapp.dir/progress.make

# Include the compile flags for this target's objects.
include src/flac/CMakeFiles/flacapp.dir/flags.make

src/flac/CMakeFiles/flacapp.dir/analyze.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/analyze.c.o: ../src/flac/analyze.c
src/flac/CMakeFiles/flacapp.dir/analyze.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/flac/CMakeFiles/flacapp.dir/analyze.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/analyze.c.o -MF CMakeFiles/flacapp.dir/analyze.c.o.d -o CMakeFiles/flacapp.dir/analyze.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/analyze.c

src/flac/CMakeFiles/flacapp.dir/analyze.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/analyze.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/analyze.c > CMakeFiles/flacapp.dir/analyze.c.i

src/flac/CMakeFiles/flacapp.dir/analyze.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/analyze.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/analyze.c -o CMakeFiles/flacapp.dir/analyze.c.s

src/flac/CMakeFiles/flacapp.dir/decode.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/decode.c.o: ../src/flac/decode.c
src/flac/CMakeFiles/flacapp.dir/decode.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/flac/CMakeFiles/flacapp.dir/decode.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/decode.c.o -MF CMakeFiles/flacapp.dir/decode.c.o.d -o CMakeFiles/flacapp.dir/decode.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/decode.c

src/flac/CMakeFiles/flacapp.dir/decode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/decode.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/decode.c > CMakeFiles/flacapp.dir/decode.c.i

src/flac/CMakeFiles/flacapp.dir/decode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/decode.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/decode.c -o CMakeFiles/flacapp.dir/decode.c.s

src/flac/CMakeFiles/flacapp.dir/encode.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/encode.c.o: ../src/flac/encode.c
src/flac/CMakeFiles/flacapp.dir/encode.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/flac/CMakeFiles/flacapp.dir/encode.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/encode.c.o -MF CMakeFiles/flacapp.dir/encode.c.o.d -o CMakeFiles/flacapp.dir/encode.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/encode.c

src/flac/CMakeFiles/flacapp.dir/encode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/encode.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/encode.c > CMakeFiles/flacapp.dir/encode.c.i

src/flac/CMakeFiles/flacapp.dir/encode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/encode.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/encode.c -o CMakeFiles/flacapp.dir/encode.c.s

src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o: ../src/flac/foreign_metadata.c
src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o -MF CMakeFiles/flacapp.dir/foreign_metadata.c.o.d -o CMakeFiles/flacapp.dir/foreign_metadata.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/foreign_metadata.c

src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/foreign_metadata.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/foreign_metadata.c > CMakeFiles/flacapp.dir/foreign_metadata.c.i

src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/foreign_metadata.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/foreign_metadata.c -o CMakeFiles/flacapp.dir/foreign_metadata.c.s

src/flac/CMakeFiles/flacapp.dir/main.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/main.c.o: ../src/flac/main.c
src/flac/CMakeFiles/flacapp.dir/main.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/flac/CMakeFiles/flacapp.dir/main.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/main.c.o -MF CMakeFiles/flacapp.dir/main.c.o.d -o CMakeFiles/flacapp.dir/main.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/main.c

src/flac/CMakeFiles/flacapp.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/main.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/main.c > CMakeFiles/flacapp.dir/main.c.i

src/flac/CMakeFiles/flacapp.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/main.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/main.c -o CMakeFiles/flacapp.dir/main.c.s

src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o: ../src/flac/local_string_utils.c
src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o -MF CMakeFiles/flacapp.dir/local_string_utils.c.o.d -o CMakeFiles/flacapp.dir/local_string_utils.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/local_string_utils.c

src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/local_string_utils.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/local_string_utils.c > CMakeFiles/flacapp.dir/local_string_utils.c.i

src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/local_string_utils.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/local_string_utils.c -o CMakeFiles/flacapp.dir/local_string_utils.c.s

src/flac/CMakeFiles/flacapp.dir/utils.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/utils.c.o: ../src/flac/utils.c
src/flac/CMakeFiles/flacapp.dir/utils.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/flac/CMakeFiles/flacapp.dir/utils.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/utils.c.o -MF CMakeFiles/flacapp.dir/utils.c.o.d -o CMakeFiles/flacapp.dir/utils.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/utils.c

src/flac/CMakeFiles/flacapp.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/utils.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/utils.c > CMakeFiles/flacapp.dir/utils.c.i

src/flac/CMakeFiles/flacapp.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/utils.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/utils.c -o CMakeFiles/flacapp.dir/utils.c.s

src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o: src/flac/CMakeFiles/flacapp.dir/flags.make
src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o: ../src/flac/vorbiscomment.c
src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o: src/flac/CMakeFiles/flacapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o -MF CMakeFiles/flacapp.dir/vorbiscomment.c.o.d -o CMakeFiles/flacapp.dir/vorbiscomment.c.o -c /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/vorbiscomment.c

src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/flacapp.dir/vorbiscomment.c.i"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/vorbiscomment.c > CMakeFiles/flacapp.dir/vorbiscomment.c.i

src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/flacapp.dir/vorbiscomment.c.s"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac/vorbiscomment.c -o CMakeFiles/flacapp.dir/vorbiscomment.c.s

# Object files for target flacapp
flacapp_OBJECTS = \
"CMakeFiles/flacapp.dir/analyze.c.o" \
"CMakeFiles/flacapp.dir/decode.c.o" \
"CMakeFiles/flacapp.dir/encode.c.o" \
"CMakeFiles/flacapp.dir/foreign_metadata.c.o" \
"CMakeFiles/flacapp.dir/main.c.o" \
"CMakeFiles/flacapp.dir/local_string_utils.c.o" \
"CMakeFiles/flacapp.dir/utils.c.o" \
"CMakeFiles/flacapp.dir/vorbiscomment.c.o"

# External object files for target flacapp
flacapp_EXTERNAL_OBJECTS =

src/flac/flac: src/flac/CMakeFiles/flacapp.dir/analyze.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/decode.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/encode.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/foreign_metadata.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/main.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/local_string_utils.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/utils.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/vorbiscomment.c.o
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/build.make
src/flac/flac: src/share/getopt/libgetopt.a
src/flac/flac: src/share/replaygain_synthesis/libreplaygain_synthesis.a
src/flac/flac: src/share/utf8/libutf8.a
src/flac/flac: src/share/grabbag/libgrabbag.a
src/flac/flac: src/libFLAC/libFLAC.so.12.1.0
src/flac/flac: /usr/lib/x86_64-linux-gnu/libogg.so
src/flac/flac: src/share/replaygain_analysis/libreplaygain_analysis.a
src/flac/flac: src/flac/CMakeFiles/flacapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable flac"
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flacapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/flac/CMakeFiles/flacapp.dir/build: src/flac/flac
.PHONY : src/flac/CMakeFiles/flacapp.dir/build

src/flac/CMakeFiles/flacapp.dir/clean:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac && $(CMAKE_COMMAND) -P CMakeFiles/flacapp.dir/cmake_clean.cmake
.PHONY : src/flac/CMakeFiles/flacapp.dir/clean

src/flac/CMakeFiles/flacapp.dir/depend:
	cd /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3 /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src/flac /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac/CMakeFiles/flacapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/flac/CMakeFiles/flacapp.dir/depend

