cmake_minimum_required(VERSION 3.20)
project(format-clang-tidy)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(format-clang-tidy src/main.cpp)

