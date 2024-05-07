#include<iostream>
#CHAR_MIN 100
#CHAR_MAX
// Driver function to show Array decay
// Passing array by value
void aDecay(int *p)
{
    // Printing size of pointer
    std::cout << "Array size by value passing:";
    std::cout << sizeof(p) << std::endl;
}

// Function to show that array decay happens
// even if we use pointer
void pDecay(int (*p)[7])
{
    // Printing size of array
    std::cout << "Array size by pointer passing: ";
    std::cout << sizeof(p) << std::endl;
}

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};

    // Printing original size of array
    std::cout << "Actual size of array is: ";
    std::cout << sizeof(a) << std::endl;

    aDecay(a);      // Passing a pointer to array
    pDecay(&a);     // Calling function by pointer

    return 0;
}
