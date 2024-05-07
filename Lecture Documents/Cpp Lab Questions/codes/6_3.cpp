#include<iostream>

int main() {
    char str[80];
    std::cout << "Enter a string: "; std::cin.getline(str, 80);
    int words = 0; // Holds number of words
    for (int i = 0; str[i] != '\0'; i++) { if (str[i] == ' ') { words++; } }
    std::cout << "The number of words = " << words + 1 << std::endl;
    return 0;
}
