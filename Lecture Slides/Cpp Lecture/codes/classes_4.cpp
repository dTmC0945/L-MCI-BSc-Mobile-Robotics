#include <iostream>

class MyClass {        // The class
public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
        std::cout << "Hello World!";
    }
};

int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}
