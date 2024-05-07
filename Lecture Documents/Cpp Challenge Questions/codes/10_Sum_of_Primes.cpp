// Solution to challenge question 10 (Sum of Primes).
#include <cmath>    // used for min, max function
#include <iostream> // used for io functions

// define a function to check whether a number is primes
long long primeChecker(long long n) {
  // returns 0 if not prime, 1 if prime
  if (n % 2 == 0)
    return 0;
  for (long long i = 3; i <= (pow(n, 0.5)); i += 2) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

// define the main function.
int main() {

  int limit = 2000000;        // limit given by the question.
  unsigned long long sum = 0; // defined the sum value (initial is 0)

  for (int i = 3; i < limit; i += 2) {
    if (primeChecker(i)) {
      sum += i;
    }
  }

  // prints the sum (adds 2 as in the initial checker 2 was omitted)
  std::cout << sum + 2;

  return 0;
}

// NOTE: long long is a 64 bit integer value i.e., 2^64 values can be stored
