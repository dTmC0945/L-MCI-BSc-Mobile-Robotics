#include <iostream>

int main() {
    char oper;
    float num1, num2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> oper;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> num1 >> num2;
    switch (oper) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            std::cout << "Error! The operator is not correct";
            break;
    }
    return 0;
}
