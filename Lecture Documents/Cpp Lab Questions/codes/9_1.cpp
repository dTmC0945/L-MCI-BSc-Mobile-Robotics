#include <iostream>
#include <fstream>

int main() {
    std::ofstream myfile;
    myfile.open("notes.txt");
    for (int i = 1; i <= 100; i++) { myfile << i << std::endl; }
    myfile << "Terminated.\n";
    myfile.close();
    return 0;
}
