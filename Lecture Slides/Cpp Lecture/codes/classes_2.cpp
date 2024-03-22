#include <iostream>

class MyClass {       // The class
public:             // Access specifier
    int myNum;        // Attribute (int variable)
    std::string myString;  // Attribute (string variable)
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 42;
    myObj.myString = "Galaxy";
    // Print attribute values
    std::cout << myObj.myNum << "\n";
    std::cout << myObj.myString;
    return 0;
}
