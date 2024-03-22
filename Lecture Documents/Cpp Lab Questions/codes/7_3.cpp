#include<iostream>

int main() {
    int size;
    std::cout << "Enter the order matrix (The order should be in odd dimensions): ";
    std::cin >> size;
    int A[size][size];
    for (int i = 0; i < size; i++)   //taking input
    {
        for (int j = 0; j < size; j++) {
            std::cout << "Enter the " << i + 1 << j + 1
                      << " value of Matrix : ";
            std::cin >> A[i][j];
        }
    }

    std::cout << "Middle Row is: ";   // printing the mid row
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2)
                std::cout << A[i][j] << "\t";
        }

    }
    std::cout << "\nMiddle Column is:";    // printing the mid col
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == size / 2)
                std::cout << A[i][j] << "\t";
        }
    }
}
