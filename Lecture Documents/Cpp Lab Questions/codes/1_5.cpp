#include<iostream> // to access io functions

int main() {
    char ch;    // store a character value
    std::cout << "\nEnter any character: ";
    std::cin >> ch; // gets the input character value
    std::cout << "ASCII equivalent is: " << static_cast<int>(ch) << std::endl;
    return 0;
}