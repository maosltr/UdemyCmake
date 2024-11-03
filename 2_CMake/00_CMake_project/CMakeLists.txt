cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

# target 1
add_library(Library STATIC my_lib.cc)

# target 2
add_executable(Executable main.cc)

target_link_libraries(Executable PUBLIC Library)
