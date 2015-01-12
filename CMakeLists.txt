cmake_minimum_required (VERSION 2.6)
project (IRC)

find_package (Threads)

include_directories(include)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall")

add_executable(build/server
  src/server.cpp
  src/functions.cpp
  src/message.cpp
  src/user.cpp
  include/server.h
  include/functions.h
  include/message.h
  include/user.h
)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/build)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/data)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/data/nicknames)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/data/users)

target_link_libraries (build/server ${CMAKE_THREAD_LIBS_INIT})