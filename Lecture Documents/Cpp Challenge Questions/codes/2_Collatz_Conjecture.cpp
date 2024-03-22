// Solution to challenge question 2 (Collatz Conjecture).
#include <iostream> // used for io functions

// define the collatz checker function
// returns the number of hops under a certain limit
int collatzChecker(int limit) {

    int hopper_max = 0;   // counter for the number of hopping
    unsigned long long n;  // the value the number can get during the conjecture
    int max_number = 0; // define a value to store the maximum number

    // The for loop follows the rule set by the conjecture and counts the number of hops
    // It then returns the highest number of hops.
    for (int grans = 1; grans < limit; grans++) {
        n = grans;
        int hopper_current = 0;
        while (n > 1) {
            if (n % 2 == 0)
                n = n / 2;
            else if (n % 2 != 0)
                n = ((3 * n) + 1);
            hopper_current++;
        }
        // the condition keeps storing the highest hops and the value
        if (hopper_current > hopper_max) {
            hopper_max = hopper_current;
            max_number = grans;
        }
    }
    return max_number;
}

int main() {
    int limit = 1000000;
    std::cout << collatzChecker(limit);
    return 0;
}