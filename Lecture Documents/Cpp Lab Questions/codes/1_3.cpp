#include<iostream> // to access io functions

int main() {
    int a, b, c;    // create variables to store three values
    std::cout << "\nEnter first number : ";
    std::cin >> a;
    std::cout << "\nEnter second number : ";
    std::cin >> b;
    c = a + b; // calculate the sum
    std::cout << "\nThe Sum is : " << c;
    return 0;
}