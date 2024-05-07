// Example of a memory management function
#include <iostream> // accessing the i/o function

int main() {    // declare the main() function
    // *ptr means it is a pointer
    // It allocates memory but does not do object construction
    int *ptr = (int *)::operator new(sizeof(int));
    std::cout << ptr << std::endl;
    ::operator delete(ptr); // calls destructor & de-allocator
} //:: means it is just global namespace