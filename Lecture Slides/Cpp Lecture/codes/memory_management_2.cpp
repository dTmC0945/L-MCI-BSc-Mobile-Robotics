// Example of a memory management functions new[] & delete[] arrays
#include <iostream> // accessing the i/o function

int main() { // declare the main() function
    // *ptr means it is a pointer
    // dynamically allocated int array with with size 4.
    int *ptr = new int[3];
    ptr[0] = 0; ptr[1] = 10; ptr[2] = 100;
    delete[] ptr; }