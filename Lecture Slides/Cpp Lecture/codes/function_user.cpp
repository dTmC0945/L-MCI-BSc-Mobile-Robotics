#include <iostream>

// display a number
void displayNum(int n1, float n2) {
    std::cout << "The int number is " << n1;
    std::cout << "The double number is " << n2;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    displayNum(num1, num2);  // calling the function
    return 0;
}