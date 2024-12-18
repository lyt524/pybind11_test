#include <iostream>
using namespace std;
#include "matrix.h"

void test(){
    Matrix m1(2, 3);
    Matrix m2(3, 3);

    m1.FillRandom();
    m2.FillRandom();

    m1.Show_Matrix();
    m2.Show_Matrix();

    Matrix result_m1_dot_m2 = m1.Matrix_Dot(m2);
    result_m1_dot_m2.Show_Matrix();
}

int main(){
    test();

    return 0;
}



