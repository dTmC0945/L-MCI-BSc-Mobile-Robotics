    #include <iostream> // include standard io
    #include <cmath> // include standard math operations

    int main() {  // define the main function
        std::cout << "please enter a floating-point number: ";
        double n;  // floating-point variable
        std::cin >> n;
        std::cout << "n == " << n
             << "\n n+1 == " << n + 1   // '\n' means “a newline”
             << "\n three times n == " << 3 * n
             << "\n twice n == " << n + n
             << "\n n squared == " << n * n
             << "\n half of n == " << n / 2
             << "\n square root of n == " << sqrt(n)  // library function
             << '\n';
    }
