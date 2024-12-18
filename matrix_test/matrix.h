#include <vector>
using namespace std;


class Matrix{
public:
    vector<float> data;
    size_t rows, cols;

    Matrix(size_t rows, size_t cols);

    void Set_Matrix_Elememt(size_t row, size_t col, float val);
    float Get_Matrix_Elememt(size_t row, size_t col);
    size_t Get_Matrix_Rows();
    size_t Get_Matrix_Cols();
    void Show_Matrix();
    void FillRandom();

    Matrix Matrix_Dot(Matrix& other);

};