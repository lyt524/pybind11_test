#include <pybind11/pybind11.h>

#include "matrix.h"

namespace py = pybind11;


// MatrixExample is binded python class name
// m is
PYBIND11_MODULE(MatrixExample, m) {
    py::class_<Matrix>(m, "Matrix")
        .def(py::init<size_t, size_t>())
        .def("Set_Matrix_Elememt", &Matrix::Set_Matrix_Elememt)
        .def("Get_Matrix_Elememt", &Matrix::Get_Matrix_Elememt)
        .def("Get_Matrix_Rows", &Matrix::Get_Matrix_Rows)
        .def("Get_Matrix_Cols", &Matrix::Get_Matrix_Cols)
        .def("FillRandom", &Matrix::FillRandom)
        .def("Show_Matrix", &Matrix::Show_Matrix)
        .def("Matrix_Dot", &Matrix::Matrix_Dot);
        // .def("PrintSummary", &Matrix::PrintSummary)
        // .def("Dot", py::overload_cast<Matrix&>(&Matrix::Dot, py::const_))
        // .def_static("Dot", py::overload_cast<const Matrix&, const Matrix&, Matrix&>(&Matrix::Dot));
}