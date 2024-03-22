#include<iostream>

int main() {
    int year; std::cout << "Enter the year : "; std::cin >> year;

    if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
        std::cout << "It is a leap year";
    else
        std::cout << "It is not a leap year";
    return 0;
}  