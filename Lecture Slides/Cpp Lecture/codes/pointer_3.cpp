// Cube a variable using pass-by-value.
#include <iostream>

int cubeByValue(int); // prototype

int main() {
    int number = 5;

    std::cout << "The original is " << number;
    // pass number by value to cubeByValue
    number = cubeByValue(number);
    std::cout << "\nThe new value  is " << number << std::endl;
    return 0; // indicates successful termination
} // end main

// calculate and return cube of integer argument
int cubeByValue(int n) {
    return n * n * n; // cube local variable n and return result
} // end function cubeByValue

