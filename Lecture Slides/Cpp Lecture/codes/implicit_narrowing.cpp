// Beware: C++ does not prevent you from trying to put a large value
// into a small variable (though a compiler may warn)
#include <iostream>            // get standard io streams

int main() {
    int a = 20000;
    char c = a;
    int b = c;
    if (a != b) {        // != means “not equal”
        std::cout << "oops!: " << a << "!=" << b << "\n";
    } else {
        std::cout << "Wow! We have large characters\n";
    }
}
