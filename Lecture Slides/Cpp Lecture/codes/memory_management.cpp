// Example of a memory management functions new & delete
#include <iostream> // accessing the i/o function

int main() { // declare the main() function
    // *ptr means it is a pointer
    // dynamically allocated int with value 5
    int *ptr = new int(5);
    std::cout << ptr << std::endl;
    delete ptr;       // deleting ptr
}