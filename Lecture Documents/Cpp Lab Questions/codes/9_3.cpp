#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("text.txt");
    char character; int count = 0;
    while (fin >> character){ ++count; }
    std::cout << count << " characters\n";
    return 0;
}
