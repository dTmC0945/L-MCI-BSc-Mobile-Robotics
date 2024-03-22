    #include <iostream>

    int factorial(int n) {
        if (n > 1) {
            return n * factorial(n - 1);
        } else {
            return 1;
        }
    }

    int main() {
        int n, result;
        std::cout << "Enter a non-negative number: ";
        std::cin >> n;
        result = factorial(n);

        std::cout << "Factorial of " << n << " = " << result;
        return 0;
    }