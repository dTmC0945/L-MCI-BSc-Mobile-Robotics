#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (number > 0) {
        std::cout << "It's a positive integer: " << number << std::endl;
    } else if (number < 0) {
        std::cout << "It's a negative integer: " << number << std::endl;
    } else {
        std::cout << "You entered 0." << std::endl;
    }
    std::cout << "This line is always printed.";
    return 0;
}
