# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.0.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.0.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server"

# Include any dependencies generated for this target.
include CMakeFiles/build/server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/build/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/build/server.dir/flags.make

CMakeFiles/build/server.dir/src/server.cpp.o: CMakeFiles/build/server.dir/flags.make
CMakeFiles/build/server.dir/src/server.cpp.o: src/server.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/build/server.dir/src/server.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/build/server.dir/src/server.cpp.o -c "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/server.cpp"

CMakeFiles/build/server.dir/src/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/build/server.dir/src/server.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/server.cpp" > CMakeFiles/build/server.dir/src/server.cpp.i

CMakeFiles/build/server.dir/src/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/build/server.dir/src/server.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/server.cpp" -o CMakeFiles/build/server.dir/src/server.cpp.s

CMakeFiles/build/server.dir/src/server.cpp.o.requires:
.PHONY : CMakeFiles/build/server.dir/src/server.cpp.o.requires

CMakeFiles/build/server.dir/src/server.cpp.o.provides: CMakeFiles/build/server.dir/src/server.cpp.o.requires
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/server.cpp.o.provides.build
.PHONY : CMakeFiles/build/server.dir/src/server.cpp.o.provides

CMakeFiles/build/server.dir/src/server.cpp.o.provides.build: CMakeFiles/build/server.dir/src/server.cpp.o

CMakeFiles/build/server.dir/src/functions.cpp.o: CMakeFiles/build/server.dir/flags.make
CMakeFiles/build/server.dir/src/functions.cpp.o: src/functions.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/build/server.dir/src/functions.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/build/server.dir/src/functions.cpp.o -c "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/functions.cpp"

CMakeFiles/build/server.dir/src/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/build/server.dir/src/functions.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/functions.cpp" > CMakeFiles/build/server.dir/src/functions.cpp.i

CMakeFiles/build/server.dir/src/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/build/server.dir/src/functions.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/functions.cpp" -o CMakeFiles/build/server.dir/src/functions.cpp.s

CMakeFiles/build/server.dir/src/functions.cpp.o.requires:
.PHONY : CMakeFiles/build/server.dir/src/functions.cpp.o.requires

CMakeFiles/build/server.dir/src/functions.cpp.o.provides: CMakeFiles/build/server.dir/src/functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/functions.cpp.o.provides.build
.PHONY : CMakeFiles/build/server.dir/src/functions.cpp.o.provides

CMakeFiles/build/server.dir/src/functions.cpp.o.provides.build: CMakeFiles/build/server.dir/src/functions.cpp.o

CMakeFiles/build/server.dir/src/message.cpp.o: CMakeFiles/build/server.dir/flags.make
CMakeFiles/build/server.dir/src/message.cpp.o: src/message.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/build/server.dir/src/message.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/build/server.dir/src/message.cpp.o -c "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/message.cpp"

CMakeFiles/build/server.dir/src/message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/build/server.dir/src/message.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/message.cpp" > CMakeFiles/build/server.dir/src/message.cpp.i

CMakeFiles/build/server.dir/src/message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/build/server.dir/src/message.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/message.cpp" -o CMakeFiles/build/server.dir/src/message.cpp.s

CMakeFiles/build/server.dir/src/message.cpp.o.requires:
.PHONY : CMakeFiles/build/server.dir/src/message.cpp.o.requires

CMakeFiles/build/server.dir/src/message.cpp.o.provides: CMakeFiles/build/server.dir/src/message.cpp.o.requires
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/message.cpp.o.provides.build
.PHONY : CMakeFiles/build/server.dir/src/message.cpp.o.provides

CMakeFiles/build/server.dir/src/message.cpp.o.provides.build: CMakeFiles/build/server.dir/src/message.cpp.o

CMakeFiles/build/server.dir/src/user.cpp.o: CMakeFiles/build/server.dir/flags.make
CMakeFiles/build/server.dir/src/user.cpp.o: src/user.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/build/server.dir/src/user.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/build/server.dir/src/user.cpp.o -c "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/user.cpp"

CMakeFiles/build/server.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/build/server.dir/src/user.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/user.cpp" > CMakeFiles/build/server.dir/src/user.cpp.i

CMakeFiles/build/server.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/build/server.dir/src/user.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/src/user.cpp" -o CMakeFiles/build/server.dir/src/user.cpp.s

CMakeFiles/build/server.dir/src/user.cpp.o.requires:
.PHONY : CMakeFiles/build/server.dir/src/user.cpp.o.requires

CMakeFiles/build/server.dir/src/user.cpp.o.provides: CMakeFiles/build/server.dir/src/user.cpp.o.requires
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/user.cpp.o.provides.build
.PHONY : CMakeFiles/build/server.dir/src/user.cpp.o.provides

CMakeFiles/build/server.dir/src/user.cpp.o.provides.build: CMakeFiles/build/server.dir/src/user.cpp.o

# Object files for target build/server
build/server_OBJECTS = \
"CMakeFiles/build/server.dir/src/server.cpp.o" \
"CMakeFiles/build/server.dir/src/functions.cpp.o" \
"CMakeFiles/build/server.dir/src/message.cpp.o" \
"CMakeFiles/build/server.dir/src/user.cpp.o"

# External object files for target build/server
build/server_EXTERNAL_OBJECTS =

build/server: CMakeFiles/build/server.dir/src/server.cpp.o
build/server: CMakeFiles/build/server.dir/src/functions.cpp.o
build/server: CMakeFiles/build/server.dir/src/message.cpp.o
build/server: CMakeFiles/build/server.dir/src/user.cpp.o
build/server: CMakeFiles/build/server.dir/build.make
build/server: CMakeFiles/build/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable build/server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/build/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/build/server.dir/build: build/server
.PHONY : CMakeFiles/build/server.dir/build

CMakeFiles/build/server.dir/requires: CMakeFiles/build/server.dir/src/server.cpp.o.requires
CMakeFiles/build/server.dir/requires: CMakeFiles/build/server.dir/src/functions.cpp.o.requires
CMakeFiles/build/server.dir/requires: CMakeFiles/build/server.dir/src/message.cpp.o.requires
CMakeFiles/build/server.dir/requires: CMakeFiles/build/server.dir/src/user.cpp.o.requires
.PHONY : CMakeFiles/build/server.dir/requires

CMakeFiles/build/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/build/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/build/server.dir/clean

CMakeFiles/build/server.dir/depend:
	cd "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles/build/server.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/build/server.dir/depend
