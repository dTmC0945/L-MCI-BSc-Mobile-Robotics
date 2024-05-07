#include <iostream>

int main() {
    int var1;
    char var2[10];

    std::cout << "Address of var1 variable: ";
    std::cout << &var1 << std::endl;
    std::cout << "Address of var2 variable: ";
    std::cout << &var2 << std::endl;
    return 0;
}
