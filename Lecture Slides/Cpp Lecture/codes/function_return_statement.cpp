#include <iostream>

int add(int a, int b) {
    return (a + b);
}

int main() {

    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(200, 58);

    std::cout << "200 + 58 = " << sum << std::endl;
    return 0;
}