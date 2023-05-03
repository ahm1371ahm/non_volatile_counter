cmake_minimum_required(VERSION 3.10)

# Basics
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
  message(FATAL_ERROR "Prevented in-tree build. Please create a build directory outside of the non_volatile_counter source code and run \"cmake -S ${CMAKE_SOURCE_DIR} -B .\" from there")
endif()

# Version and Project
set (RELEASE_SERVICE_VERSION_MAJOR "01")
set (RELEASE_SERVICE_VERSION_MINOR "00")
set (RELEASE_SERVICE_VERSION_MICRO "00")
set (RELEASE_SERVICE_VERSION "${RELEASE_SERVICE_VERSION_MAJOR}.${RELEASE_SERVICE_VERSION_MINOR}.${RELEASE_SERVICE_VERSION_MICRO}")

project(NVC VERSION ${RELEASE_SERVICE_VERSION})
message("Creating Make Files For ${PROJECT_NAME} (Non-volatile Counter) Project")

# CMake Vistual Settings
set (CMAKE_COLOR_MAKEFILE ON)

# Compiler Settings

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-O2")
# set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
# set(CAMKE_C_COMPILER "/usr/bin/clang")

include_directories(./include)
add_executable(nvc ./test/main.cpp ./src/nv_counter.cpp)