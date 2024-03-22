#include<iostream>

int main() {
    int angle1, angle2, angle3;
    std::cout << "Enter the three angles of triangle:";
    std::cin >> angle1 >> angle2 >> angle3;

    return (angle1 + angle2 + angle3 == 180) ? 1 : 0;
}  