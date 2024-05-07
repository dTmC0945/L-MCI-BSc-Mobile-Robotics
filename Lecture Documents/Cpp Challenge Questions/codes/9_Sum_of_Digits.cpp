// Solution to challenge question 9 (Sum of Digits).
#include <iostream> // used for io functions
#include <algorithm>    // used for the sort function
#include <vector>   // used for vectors

typedef unsigned long long Long;
const Long LIMIT = (Long) -1 / 2;

// A function to sum the digits of a number
int sumOfDigits(Long number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// define the main function.
int main() {

    std::vector<Long> values;

    for (Long number = 2; number < 100; number++) {
        for (Long power = number * number;
             power <= LIMIT && power != 0;
             power *= number) {

            if (sumOfDigits(power) == number) { values.push_back(power); }
        }
    }

    // sort function is used to sort values.
    sort(values.begin(), values.end());
    std::cout << "Solution is: " << values[29] << std::endl;
}

// NOTE: typedef is used to create a shorthand notation for unsigned long long as Long.
// NOTE: unsigned long long has value range from 0 to 2^64 - 1.