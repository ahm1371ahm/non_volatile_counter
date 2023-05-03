cmake_minimum_required(VERSION 3.10)

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

include_directories(./include)
add_executable(nvc ./test/main.cpp ./src/nv_counter.cpp)