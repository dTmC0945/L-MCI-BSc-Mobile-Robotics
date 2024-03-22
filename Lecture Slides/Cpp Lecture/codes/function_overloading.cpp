#include <iostream>

float absolute(float var) { // float type parameter
    if (var < 0.0) { var = -var; }
    return var;
}

int absolute(int var) {  // int type parameter
    if (var < 0) { var = -var; }
    return var;
}

int main() {
    // call function with int type parameter
    std::cout << "Absolute of -8 = " << absolute(-8) << std::endl;
    // call function with float type parameter
    std::cout << "Absolute of 8.1 = " << absolute(8.1f) << std::endl;
    return 0;
}
