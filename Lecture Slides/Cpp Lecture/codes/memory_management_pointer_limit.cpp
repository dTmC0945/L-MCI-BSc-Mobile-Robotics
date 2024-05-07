#include <iostream> // Standard i/o library

class Rectangle {
private:    int length; int breadth;
};

void fun() {
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle *p = new Rectangle();
}

int main() {
    // Infinite Loop
    while (true) {
        fun();
    }
}
