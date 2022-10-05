cmake_minimum_required(VERSION 3.16)

project(module)

add_executable(main main.cpp)

set_property(TARGET main PROPERTY CXX_STANDARD 20)
