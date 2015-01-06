cmake_minimum_required (VERSION 2.6)
project (IRC)

find_package (Threads)

include_directories(include)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall")

add_executable(build/server
  src/server.cpp
  src/functions.cpp
  include/server.h
  include/functions.h
)

target_link_libraries (build/server ${CMAKE_THREAD_LIBS_INIT})
