#include <iostream>

using namespace std;

int add(int, int);     // function prototype
int main() {
    int sum;
    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);
    cout << "200 + 58 = " << sum << endl;
    return 0;
}

// function definition
int add(int a, int b) {
    return (a + b);
}
