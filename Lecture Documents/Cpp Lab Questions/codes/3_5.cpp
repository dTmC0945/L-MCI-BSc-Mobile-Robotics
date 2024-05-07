#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int num, guess, tries = 0;
    srand(time(0)); //seed random number generator
    num = rand() % 100 + 1; // random number between 1 and 100
    std::cout << "Guess My Number Game\n\n";

    do {
        std::cout << "Enter a guess between 1 and 100 : ";
        std::cin >> guess;
        tries++;

        if (guess > num)
            std::cout << "Too high!\n\n";
        else if (guess < num)
            std::cout << "Too low!\n\n";
        else
            std::cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    } while (guess != num);

    return 0;
}
