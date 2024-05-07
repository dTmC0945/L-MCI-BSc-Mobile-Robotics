#include <iostream>
#include <fstream>

int main() {
    // Create and open a text file
    std::ofstream MyFile("string_file.txt");

    // Write to the file
    MyFile << "It was the best of times, it was the worst of times.";

    // Close the file
    MyFile.close();
}
