// Solution to challenge question 3 (Circular Primes).
#include <iostream> // used for io functions

#define limit 1000001
#define mx 1001

bool p[limit];  //define a simple array of integers under 1 million and set every non prime as true.
int primeTable[78500] = {}; // define an empty array to store primes under one million.

int nPrime = 0; // count the number of primes.

void sieve() {      // defining the sieve of Erastosthenes.
    int i, j;
    p[0] = p[1] = true;
    for (i = 4; i <= limit; i += 2) { p[i] = true; }

    primeTable[nPrime++] = 2;

    for (i = 3; i <= mx; i += 2) {
        if (!p[i]) {
            primeTable[nPrime++] = i;
            for (j = i * i; j <= limit; j += i) { p[j] = true; }
        }
    }
    for (i = mx + 2; i <= limit; i += 2) { if (!p[i]) { primeTable[nPrime++] = i; }}

}

// Check whether a number is circular prime or not and returns true if it is.
bool isCircularPrime(long n) {
    long pow = 1, j;
    if (n < 10) { return true; }

    while (pow <= n) { pow *= 10; }
    pow /= 10;
    j = n;
    while (1) {
        j = (j % pow) * 10 + j / pow;
        if (p[j]) { return false; }
        if (j == n) { break; }
    }

    return true;
}

int main() {
    long i, cnt = 0;
    sieve();
    std::cout << "Number of primes bellow 1 million is " << nPrime << std::endl;

    for (i = 0; i < nPrime; i++) { if (isCircularPrime(primeTable[i])) { cnt++; }}

    std::cout << "Number of circular primes bellow 1 million is " << cnt << std::endl;
    return 0;
}

// NOTE: It is known there are 78,498 primes under one million.