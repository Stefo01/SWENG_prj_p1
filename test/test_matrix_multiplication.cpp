#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult


// TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
//     std::vector<std::vector<int>> A = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };
//     std::vector<std::vector<int>> B = {
//         {7, 8},
//         {9, 10},
//         {11, 12}
//     };
//     std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

//     multiplyMatrices(A, B, C, 2, 3, 2);

//     std::vector<std::vector<int>> expected = {
//         {2078, 64},
//         {143, 17}
//     };

//     ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
// }

TEST(MatrixMultiplicationTest2, TestMultiplyMatrices)
{
    std::vector<std::vector<int>> A = {
        {13, 5, 0, 6}};
    std::vector<std::vector<int>> B = {
        {1, 2,4},
        {0, 2,4},
        {0, 2,4},
        {0, 2,4}};
    std::vector<std::vector<int>> C(1, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 1, 4, 3);

    std::vector<std::vector<int>> expected = {
        {23, 56}};

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest3, TestMultiplyMatrices)
{
    std::vector<std::vector<int>> A(100, std::vector<int>(1));

    // Riempie la matrice con numeri da 1 a 100
    int number = 1;
    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 1; ++j)
        {
            A[i][j] = number;
            number++;
        }
    }

    std::vector<std::vector<int>> B ={{1}};

        std::vector<std::vector<int>>
            C(100, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 100, 1, 1);

    std::vector<std::vector<int>> expected;
    expected=A;

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

