#include<iostream> // to access io functions

int main() {
    int a;  // define a parameter to store value
    std::cout << "Enter any number : ";
    std::cin >> a;
    // if the number is divisible by 2 it is defined as even
    // else the number must be odd.
    if (a % 2 == 0) // state the condition
        std::cout << "The number is even";
    else
        std::cout << "The number is odd";

    return 0;
}
