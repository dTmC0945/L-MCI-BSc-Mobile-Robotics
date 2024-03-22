#include<iostream>

void showPrime(int, int);

int main() {
    int x, y;
    std::cout << "Enter first  number : "; std::cin >> x;
    std::cout << "Enter second  number : "; std::cin >> y;
    showPrime(x, y);
    return 0;
}

void showPrime(int a, int b) {
    bool flag;
    for (int i = a + 1; i <= b; i++) {
        flag = false;
        for (int j = 2; j < i; j++) { if (i % j == 0)  { flag = true; break; } }
        if (flag == false && i > 1){ std::cout << i << std::endl; }
    }
}