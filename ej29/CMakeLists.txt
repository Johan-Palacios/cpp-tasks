cmake_minimum_required(VERSION 3.16)

project(module)

add_executable(main.o main.cpp)

set_property(TARGET main.o PROPERTY CXX_STANDARD 20)
