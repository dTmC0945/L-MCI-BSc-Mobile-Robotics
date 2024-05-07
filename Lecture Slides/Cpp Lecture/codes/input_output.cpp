// reads first name:
#include <iostream>

int main() {
    std::cout << "Name (followed " << "by 'enter'):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << '\n';
}
// note how several values can be output by a single statement
// a statement that introduces a variable is called a declaration
// a variable holds a value of a specified type
// the final return 0; is optional in main()
// but you may need to include it to pacify your compiler
