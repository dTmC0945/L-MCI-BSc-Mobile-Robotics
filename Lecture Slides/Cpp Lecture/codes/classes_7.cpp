#include <iostream>

class MyClass {     // The class
public:           // Access specifier
    MyClass() {     // Constructor
        std::cout << "Hello World!";
    }
};

int main() {
    MyClass myObj;    // Create an object of MyClass
    //  (this will call the constructor)
    return 0;
}
