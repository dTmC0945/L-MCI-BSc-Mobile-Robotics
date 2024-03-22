#include <iostream>

int main() {

    int k; int l;
    std::cout << "Enter value of K: "; std::cin >> k;
    std::cout << "Enter value of L: "; std::cin >> l;
    int *ptrK = &k; int *ptrL = &l;
    std::cout << "Value of ptrK is " << *ptrK << " stored in address " << ptrK << "\n";
    std::cout << "Value of ptrL is " << *ptrL << " stored in address " << ptrL << "\n";
    return 0;
}
