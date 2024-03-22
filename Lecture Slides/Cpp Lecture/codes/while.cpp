# include <iostream>
# include <cmath>

int main() {    // calculate and print a table of squares 0-99:
    int i = 0;
    while (i < 100) {
        std::cout << i << '\t' << sqrt(i) << '\n';
        ++i; // increment i
    }
}