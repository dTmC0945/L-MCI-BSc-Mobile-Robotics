#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    int spaceCounter;
    std::ifstream myfile("blank_spaces.txt");
    if (myfile.is_open()) {
        std::string content((std::istreambuf_iterator<char>(myfile)),
                            (std::istreambuf_iterator<char>()));

        std::cout << content << std::endl;

        spaceCounter = 0;

        for (int i = 0; content[i] != '\0'; i++) {
            if (content[i] == ' ') {
                spaceCounter++;
            }
        }
        myfile.close();
    } else std::cout << "Unable to open file";
    std::cout << "White spaces in the textfile: " << spaceCounter + 1 << std::endl;
    return 0;
}
