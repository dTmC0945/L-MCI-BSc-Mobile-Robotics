#include<iostream>

int main() {
    char str[80];
    std::cout << "Enter string: "; std::cin.getline(str, 80);
    int l; //Hold length of string
    for (l = 0; str[l] != '\0'; l++); //Find the length of the string
    //Display the string backwards
    for (int i = l - 1; i >= 0; i--) { std::cout << str[i]; }
    return 0;
}
