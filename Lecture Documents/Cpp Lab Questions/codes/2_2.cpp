#include<iostream> // to access io functions

int main() {
    int a;  // define a variable to store value
    std::cout << "Enter any number:";
    std::cin >> a; // gets value

    // checks whether the number is bigger or smaller than 0
    if (a > 0)
        std::cout << "The absolute value of number is:" << a;
    else
        std::cout << "The absolute value of number is:" << -(a);

    return 0;
}  