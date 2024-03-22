#include<iostream>

double power(double, int= 2);

int main() {
    int p;
    double n, r;
    std::cout << "Enter number : ";
    std::cin >> n;
    std::cout << "Enter exponent : ";
    std::cin >> p;
    r = power(n, p);
    std::cout << "Result is " << r;
    r = power(n);
    std::cout << "\nResult without passing exponent is " << r;
    return 0;
}

double power(double a, int b) {
    double x = 1;
    for (int i = 1; i <= b; i++) { x = x * a; }

    return x;
}
