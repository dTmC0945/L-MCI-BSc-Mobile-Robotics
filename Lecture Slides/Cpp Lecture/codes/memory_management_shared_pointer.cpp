#include <iostream> // Standard i/o library
#include <memory> // Dynamic Memory management library

class Rectangle { // Define an arbitrary class
    int length; int breadth; // Houses 2 variables

public:     // public methods/attributes
    Rectangle(int l, int b) { length = l; breadth = b; }
    int area() { return length * breadth; }
};

int main() {
    // define the shared smart pointer
    std::shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    std::cout << P1->area() << std::endl; // prints 50
    std::shared_ptr<Rectangle> P2; P2 = P1;
    std::cout << P2->area() << std::endl;  // prints 50
    std::cout << P1.use_count() << std::endl; // ref counter 2
    return 0; // returns 0 if everything works
}
