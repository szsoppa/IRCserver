# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:
.PHONY : .NOTPARALLEL

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.0.2/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.0.2/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/szymon/Dropbox/Uczelnia/Projekty/Sieci Komputerowe/server/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named build/server

# Build rule for target.
build/server: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 build/server
.PHONY : build/server

# fast build rule for target.
build/server/fast:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/build
.PHONY : build/server/fast

src/functions.o: src/functions.cpp.o
.PHONY : src/functions.o

# target to build an object file
src/functions.cpp.o:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/functions.cpp.o
.PHONY : src/functions.cpp.o

src/functions.i: src/functions.cpp.i
.PHONY : src/functions.i

# target to preprocess a source file
src/functions.cpp.i:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/functions.cpp.i
.PHONY : src/functions.cpp.i

src/functions.s: src/functions.cpp.s
.PHONY : src/functions.s

# target to generate assembly for a file
src/functions.cpp.s:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/functions.cpp.s
.PHONY : src/functions.cpp.s

src/message.o: src/message.cpp.o
.PHONY : src/message.o

# target to build an object file
src/message.cpp.o:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/message.cpp.o
.PHONY : src/message.cpp.o

src/message.i: src/message.cpp.i
.PHONY : src/message.i

# target to preprocess a source file
src/message.cpp.i:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/message.cpp.i
.PHONY : src/message.cpp.i

src/message.s: src/message.cpp.s
.PHONY : src/message.s

# target to generate assembly for a file
src/message.cpp.s:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/message.cpp.s
.PHONY : src/message.cpp.s

src/server.o: src/server.cpp.o
.PHONY : src/server.o

# target to build an object file
src/server.cpp.o:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/server.cpp.o
.PHONY : src/server.cpp.o

src/server.i: src/server.cpp.i
.PHONY : src/server.i

# target to preprocess a source file
src/server.cpp.i:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/server.cpp.i
.PHONY : src/server.cpp.i

src/server.s: src/server.cpp.s
.PHONY : src/server.s

# target to generate assembly for a file
src/server.cpp.s:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/server.cpp.s
.PHONY : src/server.cpp.s

src/user.o: src/user.cpp.o
.PHONY : src/user.o

# target to build an object file
src/user.cpp.o:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/user.cpp.o
.PHONY : src/user.cpp.o

src/user.i: src/user.cpp.i
.PHONY : src/user.i

# target to preprocess a source file
src/user.cpp.i:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/user.cpp.i
.PHONY : src/user.cpp.i

src/user.s: src/user.cpp.s
.PHONY : src/user.s

# target to generate assembly for a file
src/user.cpp.s:
	$(MAKE) -f CMakeFiles/build/server.dir/build.make CMakeFiles/build/server.dir/src/user.cpp.s
.PHONY : src/user.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... build/server"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... src/functions.o"
	@echo "... src/functions.i"
	@echo "... src/functions.s"
	@echo "... src/message.o"
	@echo "... src/message.i"
	@echo "... src/message.s"
	@echo "... src/server.o"
	@echo "... src/server.i"
	@echo "... src/server.s"
	@echo "... src/user.o"
	@echo "... src/user.i"
	@echo "... src/user.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
