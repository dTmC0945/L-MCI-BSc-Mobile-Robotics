// Solution to challenge question 1 (Pythagorean Triplets).
#include <iostream> // used for io functions
#include <cmath>    // used for min, max function

// define the void function for finding the triplets
void pythagoreanTriplets(int limit) { // function is void as only print is needed

    int a, b, c;    // define the three parts of a triangle such that a2 + b2 = c2
    unsigned int ca, cb, cc; // stores values from 0 to 65535

    // a and b are looped from 1 to limit and if a+b+c = limit, prints it
    for (a = 1; a < limit; a++) {
        for (b = 1; b < limit; b++) {
            if (a + b > limit)
                break;
            for (c = 1; c < limit; c++) {
                if (a + b + c == limit) {
                    ca = std::min(a, b);
                    cc = std::max(std::max(a, b), c);
                    cb = (a + b + c) - ca - cc;
                    if (pow((double) ca, 2) +
                        pow((double) cb, 2) == pow((double) cc, 2))
                        std::cout << " a:" << ca
                                  << " b:" << cb
                                  << " c:" << cc
                                  << " rep:" << ca * cb * cc << std::endl;
                }
            }
        }
    }
}

// define the main function
int main() {

    int limit = 2000;   // sets the limit for the a + b + c = 2000
    pythagoreanTriplets(limit); // invoke the function
    return 0;   // return once the function is done its work.
}