#include <iostream>

class MyClass {        // The class
public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class

void MyClass::myMethod() {
    std::cout << "Hello World!";
}

int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method
    return 0;
}
