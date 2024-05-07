#include<iostream>

void lower(int matrix[10][10], int m) {
    int i, j;
    for (i = 0; i < m; i++) { for (j = 0; j < m; j++) {
            if (i < j) { std::cout << "0" << " "; }
            else { std::cout << matrix[i][j] << " "; }
        }
        std::cout << std::endl;
    }
}

// Function to form upper triangular matrix
void upper(int matrix[10][10], int m) {
    int i, j;
    for (i = 0; i < m; i++) { for (j = 0; j < m; j++) {
            if (i > j) { std::cout << "0" << " "; }
            else { std::cout << matrix[i][j] << " "; }
        }
        std::cout << std::endl;
    }
}

int main() {
    int m, i, j, matrix[10][10];
    std::cout << "Enter square matrix size (max 10):" << std::endl; std::cin >> m;
    std::cout << "\nEnter the Matrix row wise:\n" << std::endl;
    for (i = 0; i < m; i++) { for (j = 0; j < m; ++j) { std::cin >> matrix[i][j]; } }
    std::cout << "Lower triangular matrix: \n" << std::endl; lower(matrix, m);
    std::cout << "Upper triangular matrix: \n" << std::endl; upper(matrix, m);
    return 0;
}
