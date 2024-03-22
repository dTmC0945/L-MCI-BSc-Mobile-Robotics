#include<iostream>
#include<ctime>

int main() {
    int n;
    srand(time(0));
    n = rand() % 91 + 10;
    std::cout << "The randomly selected number is :" << n;
    return 0;
}