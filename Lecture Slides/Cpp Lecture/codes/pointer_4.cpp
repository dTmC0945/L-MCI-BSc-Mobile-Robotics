// Cube a variable using pass-by-reference with a pointer argument.
#include <iostream>

void cubeByReference(int *); // prototype

int main() {
    int number = 5;

    std::cout << "The original value of number is " << number;

    std::cubeByReference(&number); // pass number address to cubeByReference

    std::cout << "\nThe new value of number is " << number << std::endl;
    return 0; // indicates successful termination
} // end main

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
} // end function cubeByReference
