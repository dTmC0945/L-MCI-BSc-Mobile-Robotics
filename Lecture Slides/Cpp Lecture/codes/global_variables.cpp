#include <iostream>

int g; // Global variable declaration:

int main() {
    // Local variable declaration:
    int a, b;
    // actual initialization
    a = 10;
    b = 20;
    g = a + b;

    std::cout << g;

    return 0;
}
