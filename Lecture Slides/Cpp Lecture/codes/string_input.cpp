    #include <iostream> // include standard io

    int main() { // define the main function
        std::cout << "please enter your first and second names\n";
        std::string first; // define string variable
        std::string second; // define string variable
        std::cin >> first >> second;                 // read two strings
        std::string name = first + ' ' + second;    // concatenate strings
        // separated by a space
        std::cout << "Hello, " << name << '\n';
    }
