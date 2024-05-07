#include <iostream>

class SmartPtr {    // Define a smart pointer class
    int *ptr; // Actual pointer
public:
    explicit SmartPtr(int *p = NULL) { ptr = p; }
    ~SmartPtr() { delete (ptr); }  // Destructor
    // Overloading de-referencing operator
    int &operator*() { return *ptr; }
};

int main() {
    SmartPtr ptr(new int());
    *ptr = 20;
    std::cout << *ptr;
    // We don't need to call delete ptr: when the object
    // ptr goes out of scope, the destructor for it is
    // automatically called and destructor does delete ptr.
    return 0;
}
