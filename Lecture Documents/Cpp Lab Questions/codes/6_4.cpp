#include<iostream>

int main() {
    char str1[80], str2[80];
    int l = 0; //Hold length of first string
    std::cout << "Enter first string: "; std::cin.getline(str1, 80);
    std::cout << "Enter second string: "; std::cin.getline(str2, 80);
    //Find length of first string.
    for (l = 0; str1[l] != '\0'; l++);
    //Adding second string content in first
    for (int i = 0; str2[i] != '\0'; i++) { str1[l++] = str2[i]; }

    str1[l] = '\0';
    std::cout << "\nThe first string after adding second string content:\n\n" << str1;
    return 0;
}
