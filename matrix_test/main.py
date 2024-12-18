from build import MatrixExample

# Matrix = MatrixExample.Matrix

m1 = MatrixExample.Matrix(2, 3)
m2 = MatrixExample.Matrix(3, 6)

m1.FillRandom()
m2.FillRandom()

m1.Show_Matrix()
m2.Show_Matrix()

m_m1_dot_m2 = m1.Matrix_Dot(m2)
m_m1_dot_m2.Show_Matrix()

