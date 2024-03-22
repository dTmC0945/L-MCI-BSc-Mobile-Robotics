// standard macro names
#include <iostream>

int main() {
    std::cout << "This is the line number " << __LINE__;
    std::cout << " of file " << __FILE__ << ".\n";
    std::cout << "Its compilation began " << __DATE__;
    std::cout << " at " << __TIME__ << ".\n";
    std::cout << "The compiler gives a __cplusplus value of ";
    std::cout << __cplusplus;

    return 0;
}