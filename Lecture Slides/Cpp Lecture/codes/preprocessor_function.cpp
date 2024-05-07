#include <iostream>

#define getMax(a, b) ((a)>(b)?(a):(b))

int main() {
    int x = 5;
    int y;

    y = getMax(x, 2);

    std::cout << y << std::endl;
    std::cout << getMax(7, x) << std::endl;

    return 0;
}