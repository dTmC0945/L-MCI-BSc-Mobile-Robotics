#include<iostream>
#include<cmath>

int main() {
    float a, b, c, s, Area;
    std::cout << "Enter three sides of the triangle : ";
    std::cin >> a >> b >> c;
    s = (a + b + c) / 2;
    Area = sqrt(s * (s - a) * (s - b) * (s - c));
    std::cout << "Area of the triangle is: " << Area;

    return 0;
}
