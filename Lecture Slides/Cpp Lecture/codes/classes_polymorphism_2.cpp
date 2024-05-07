#include <iostream> // access i/o functions

class Animal {  // Base class
public: void animalSound() {    // define method
        std::cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal { // Derived class
public: void animalSound() { // inherited method
        std::cout << "The pig says: Oink Oink \n";
    }
};

int main() {    // define main function
    Animal myAnimal; Pig myPig; // create objects
    // access original and inherited method.
    myAnimal.animalSound(); myPig.animalSound();
    return 0;
}
