#include<iostream>

int main() {
    char str[80];
    std::cout << "Enter string: "; std::cin.getline(str, 80);
    int i; //Hold length of string
    for (i = 0; str[i] != '\0'; i++); std::cout << "Length of string is: " << i;
    return 0;
}
