// Solution to challenge question 8 (Factorisation).
#include <iostream> // used for io functions

int i, j, k, sum;
int factorial[10000];

// define a pointer function to calculate the factorial of a number
int *getFactorial(int n) {
    factorial[0] = 1;
    k = 0;
    for (i = 2; i <= n; i++) {
        for (j = 0; j <= k; j++) { factorial[j] *= i; }
        for (j = 0; j <= k; j++) {
            if (factorial[j] >= 10) {
                factorial[j + 1] += (factorial[j] - (factorial[j] % 10)) / 10;
                factorial[j] = factorial[j] % 10;
                if (j == k) { k++; }
            }
        }
    }
    return factorial;
}

// define a function to sum up the digits of a number
int getSum(int *array, int k) {
    sum = 0;
    for (i = 0; i <= k; i++)
        sum += array[i];
    return sum;
}

// define the main function
int main() {
    int limit = 100;
    int *factorial = getFactorial(limit);
    sum = getSum(factorial, k);
    std::cout << "The sum of the digits of " << limit << "! is " << sum << ".\n";
    return 0;
}