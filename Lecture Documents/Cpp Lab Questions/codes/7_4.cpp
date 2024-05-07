#include <iostream>

int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    std::cout << "Rows and columns for first matrix: ";
    std::cin >> r1 >> c1;
    std::cout << "Rows and columns for second matrix: ";
    std::cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2) {
        std::cout << "Error! column of first matrix not equal to row of second.";
        std::cout << "Enter rows and columns for first matrix: ";
        std::cin >> r1 >> c1;
        std::cout << "Enter rows and columns for second matrix: ";
        std::cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    std::cout << std::endl << "Enter elements of matrix 1:" << std::endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            std::cout << "Enter element a" << i + 1 << j + 1 << " : ";
            std::cin >> a[i][j];
        }

    // Storing elements of second matrix.
    std::cout << std::endl << "Enter elements of matrix 2:" << std::endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j) {
            std::cout << "Enter element b" << i + 1 << j + 1 << " : ";
            std::cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) { mult[i][j] = 0; }

    // Multiplying matrix a and b and storing in array mult.
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k) { mult[i][j] += a[i][k] * b[k][j]; }

    // Displaying the multiplication of two matrix.
    std::cout << std::endl << "Output Matrix: " << std::endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) {
            std::cout << " " << mult[i][j];
            if (j == c2 - 1) { std::cout << std::endl; }
        }
    return 0;
}
