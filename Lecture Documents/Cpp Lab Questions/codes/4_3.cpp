#include<iostream>

int factorial(int a) {
    int fact = 1;
    while (a >= 1) {
        fact = fact * a;
        a--;
    }
    return fact;
}

int main() {
    int x, f;
    std::cout << "Enter number : ";
    std::cin >> x;
    f = factorial(x);
    std::cout << "The factorial is :" << f;
    return 0;
}


