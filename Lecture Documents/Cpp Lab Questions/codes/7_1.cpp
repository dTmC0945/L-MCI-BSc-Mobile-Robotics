#include<iostream>

int main() {
    int a[5][5], d1sum = 0, d2sum = 0, m, i, j;
    std::cout << "Enter size of the square matrix(max 5):" << std::endl;
    std::cin >> m;
    std::cout << "\nEnter the Matrix row wise:\n" << std::endl;

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }

    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) {
            if (i == j)
                d1sum += a[i][j];
            if (i + j == (m - 1))
                d2sum += a[i][j];
        }
    }

    std::cout << "\nSum of left diagonal is " << d1sum << std::endl;
    std::cout << "\nSum of right diagonal is " << d2sum << std::endl;

    return 0;
}
