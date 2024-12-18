cmake_minimum_required(VERSION 3.10)

project(MatrixExample)

set(CMAKE_CXX_STANDARD 17)
set(MAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(PYTHON_EXECUTABLE "/usr/bin/python3")
set(PYTHON_INCLUDE_DIRECTORY "/usr/include/python3.10")

add_executable(MatrixExampleTest main.cpp matrix.cpp)
add_subdirectory(extern/pybind11)
pybind11_add_module(MatrixExample bind.cpp matrix.cpp)