// Using the & and * operators.
#include <iostream> // access i/o functions

int main() {
    int a; // a is an integer
    int *aPtr; // aPtr is an int * -- pointer to an integer

    a = 7; // assigned 7 to a
    aPtr = &a; // assign the address to aPtr

    std::cout << "The address of a is " << &a
              << "\nThe value of aPtr is " << aPtr;
    std::cout << "\nThe value of a is " << a
              << "\nThe value of *aPtr is " << *aPtr;
    std::cout << "\n* and & are inverses of "
              << "\n&*aPtr = " << &*aPtr
              << "\n*&aPtr = " << *&aPtr << std::endl;
    return 0; // indicates successful termination
} // end main
