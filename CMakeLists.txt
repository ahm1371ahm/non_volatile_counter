cmake_minimum_required(VERSION 3.10)

message("Creating Make Files")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Non-Volatile-Counter)

include_directories(./include)
add_executable(app ./test/main.cpp ./src/nv_counter.cpp)