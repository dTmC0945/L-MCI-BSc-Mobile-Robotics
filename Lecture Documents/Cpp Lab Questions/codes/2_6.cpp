#include <iostream>
#include <cmath>

int main() {
    float a, b, c, d, root1, root2;
    std::cout << "Enter value of  a, b and c : "; std::cin >> a >> b >> c;
    d = b * b - 4 * a * c;

    if (d == 0) {
        root1 = (-b) / (2 * a); root2 = root1;
        std::cout << "Roots are real & equal";
    } else if (d > 0) {
        root1 = -(b + sqrt(d)) / (2 * a); root2 = -(b - sqrt(d)) / (2 * a);
        std::cout << "Roots are real & distinct";
    } else {
        root1 = (-b) / (2 * a); root2 = sqrt(-d) / (2 * a);
        std::cout << "Roots are imaginary";
    }
    std::cout << "\nRoot 1= " << root1 << "\nRoot 2= " << root2; return 0;
}