#include <iostream>

int main() {
    int a = 2, b = 3;
    std::cout << "Before swapping a = " << a << " , b = " << b << std::endl;
    // temporary variable
    int temp;
    temp = a; a = b; b = temp;
    std::cout << "After swapping a = " << a << " , b = " << b << std::endl;
    return 0;
}