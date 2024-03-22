#include <iostream>

int square(int x) // return the square of x
{
    return x * x;
}

int main() {
    std::cout << square(2) << '\n'; // prints 4
    std::cout << square(3) << '\n'; // prints 9
}
