cmake_minimum_required(VERSION 3.1)
project(simple-lib)

set(simple-lib_VERSION_MAJOR 1)
set(simple-lib_VERSION_MINOR 0)
set(simple-lib_VERSION_PATCH 0)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(libs)
