    #include <iostream> // include standard io

    int main() { // define the main function
        std::cout << "please enter your first and second names\n";
        std::string first;  // define string variable
        std::string second; // define string variable
        std::cin >> first >> second; // read two strings
        std::string name = first + ' ' + second;    // concatenate strings
        // separated by a space
        std::cout << "Hello, " << name << '\n';
    }

    // note how several values can be output by a single statement
    // a statement that introduces a variable is called a declaration
    // a variable holds a value of a specified type
    // the final return 0; is optional in main()
    // but you may need to include it to pacify your compiler