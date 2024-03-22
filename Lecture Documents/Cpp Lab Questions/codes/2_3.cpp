#include<iostream> // to access io functions

int main() {
    int Sam_age, Alice_age, Bob_age;
    std::cout << "Enter Sam age:";
    std::cin >> Sam_age;
    std::cout << "Enter Alice age:";
    std::cin >> Alice_age;
    std::cout << "Enter Bob age:";
    std::cin >> Bob_age;

    if (Sam_age < Alice_age && Sam_age < Bob_age)
        std::cout << "Sam is the youngest";
    else if (Alice_age < Sam_age && Alice_age < Bob_age)
        std::cout << "Alice is the youngest";
    else
        std::cout << "Bob is the youngest";

    return 0;
}