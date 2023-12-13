cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(simple_example ${SOURCE_FILES})