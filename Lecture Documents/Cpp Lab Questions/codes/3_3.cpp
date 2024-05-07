#include<iostream>
#include<cctype>

int main() {
    char ch;
    std::cout << "Enter any character :";
    ch = getchar();
    if (isalpha(ch))
        std::cout << "Alphabet";
    else if (isdigit(ch))
        std::cout << "Number";
    else
        std::cout << "Special Character";

    return 0;
}  