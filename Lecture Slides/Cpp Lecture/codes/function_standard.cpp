#include <iostream>
#include <cmath>

int main() {
    double number, squareRoot;
    number = 49.0;
    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);
    std::cout << "Square root of " << number << " = " << squareRoot;
    return 0;
}