#include<iostream>

using namespace std;

void zero_small(int &, int &);

int main() {
    int x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    zero_small(x, y);
    cout << "First number is : " << x;
    cout << "\nSecond number is : " << y;

    return 0;
}

void zero_small(int &a, int &b) {
    if (a < b)
        a = 0;
    else
        b = 0;
}
