#include <vector>
#include <iostream>
#include <random>
#include "matrix.h"
using namespace std;

Matrix::Matrix(size_t rows, size_t cols): rows(rows), cols(cols), data(rows * cols, 0){}

void Matrix::Set_Matrix_Elememt(size_t row, size_t col, float val){
    if(row <= 0 || row > rows || col <= 0 || col > cols){
        throw std::out_of_range("Matrix indices out of range");
        return;
    }
    data[(row - 1) * cols + (col - 1)] = val;
}

float Matrix::Get_Matrix_Elememt(size_t row, size_t col){
    if(row <= 0 || row > rows || col <= 0 || col > cols){
        throw std::out_of_range("Matrix indices out of range");
        return 0;
    }
    return data[(row - 1) * cols + (col - 1)];
}

Matrix Matrix::Matrix_Dot(Matrix& other){
    if(this->cols != other.rows){
        throw std::invalid_argument("Matrix dimension mismatch");
    }
    Matrix result(this->rows, other.cols);
    for(size_t i = 1; i <= this->rows; i++){  // i: result matrix rows index
        for(size_t j = 1; j <= other.cols; j++){  // j: result matrix cols index
            float sum {0.0};
            for(size_t k = 1; k <= this->cols; k++){  // k: dot count
                sum += this->Get_Matrix_Elememt(i, k) * other.Get_Matrix_Elememt(k, j);
            }
            result.Set_Matrix_Elememt(i, j, sum);
        }
    }
    return result;
}

size_t Matrix::Get_Matrix_Rows(){
    return this->rows;
}

size_t Matrix::Get_Matrix_Cols(){
    return this->cols;
}

void Matrix::FillRandom(){
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_real_distribution<float> distr(0.0f, 1.0f);

    for(size_t i = 1; i <= this->rows; i++){
        for(size_t j = 1; j <= this->cols; j++){
            this->Set_Matrix_Elememt(i, j, distr(eng));
        }
    }

}

void Matrix::Show_Matrix(){
    for(size_t i = 1; i <= rows; i++){
        for(size_t j = 1; j <= cols; j++){
            std::cout << Matrix::Get_Matrix_Elememt(i, j) << " ";
        }
        std::cout << endl;
    }
    std::cout << "-----------------" << endl;
}


