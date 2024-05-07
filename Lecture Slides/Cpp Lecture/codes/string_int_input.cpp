    #include <iostream> // include standard io

    int main() { // define the main function
        std::cout << "please enter your first name and age\n";
        std::string first_name;           	// string variable
        int age;            		// integer variable
        std::cin >> first_name >> age;     	// read
        std::cout << "Hello, " << first_name << " age " << age << '\n';
    }
