cmake_minimum_required(VERSION 3.4)

project(example)

set(PYTHON_EXECUTABLE "/usr/bin/python3")
set(PYTHON_INCLUDE_DIRECTORY "/usr/include/python3.10")

add_subdirectory(extern/pybind11)
pybind11_add_module(example example.cpp)

