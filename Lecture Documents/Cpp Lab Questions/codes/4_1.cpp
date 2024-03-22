#include<iostream>

int sum(int a, int b) { int total; total = a + b; return total; }

int main() {
    int x, y, s;
    std::cout << "Enter first number : "; std::cin >> x;
    std::cout << "Enter second number : "; std::cin >> y;
    s = sum(x, y); std::cout << "The sum is : " << s;
    return 0;
}


