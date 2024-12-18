#include <pybind11/pybind11.h>
#include <iostream>
using namespace std;


int add(int i, int j){
    return i + j;
}

int my_minus(int i, int j){
    return i - j;
}


PYBIND11_MODULE(example, m){
    m.doc() = "pybind11 example plugin";
    m.def("add", &add, "A function which adds two numbers");
    m.def("my_minus", &my_minus, "A function which minus the second number from the first one");
}