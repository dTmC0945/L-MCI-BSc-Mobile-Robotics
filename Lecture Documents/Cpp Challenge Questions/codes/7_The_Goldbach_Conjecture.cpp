// Solution to challenge question 7 (The Goldbach Conjecture).
#include <iostream> // used for io functions
#include <cmath>    // used for min, max function

// define a function to generate prime numbers.
void primeGenerator(int *a) {
    int i, j, k = 2, flag;
    a[0] = 2; a[1] = 3;
    for (i = 4; i < 100000; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            } else {
                flag = 0;
                continue;
            }
        }
        if (flag == 0) {
            a[k] = i;
            k++;
        }
    }
}

// define a function to check whether a given number is prime.
int primeChecker(int x) {
    int i, count = 0;
    for (i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            count++;
            break;
        }
    }
    return (count == 0 && x != 1) ? 1 : 0;
}

// define a main function
int main() {
    int a[100000];
    primeGenerator(a);//to generate prime numbers
    int i, x, flag = 0;
    float n;
    for (x = 1;; x += 2) {
        for (i = 0; a[i] < x; i++) {
            //checking after subtraction and division,
            // if result's sqrt is perfect square
            n = sqrt((x - a[i]) / 2);
            if (n == (int) n) {
                flag = 0;
                break;
            } else { flag = 1; }
        }
        if (flag == 1) //if not perfect square, check if its prime
        {
            if (!primeChecker(x)) //if prime , print the final solution
            {
                std::cout << x << std::endl;
                exit(0);
            }
        }
    }
}