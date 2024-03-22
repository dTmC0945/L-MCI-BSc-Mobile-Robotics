#include <iostream>

class mother {
public:
    void display() {
        std::cout << "mother: display function\n";
    }
};

class daughter : public mother {
public:
    void display() {
        std::cout << "daughter: display function\n\n";
    }
};

int main() {
    daughter rita;
    rita.display();
    return 0;
}
