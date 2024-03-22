#include <iostream> // access i/o functions

class Animal {  // Base class
public: void animalSound() {    // original function
        std::cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal { // Derived class
public: void animalSound() {    // inherited function
        std::cout << "The pig says: Oink Oink \n";
    }
};

class Dog : public Animal { // Derived class
public: void animalSound() {    // inherited function
        std::cout << "The dog says: Woof Woof \n";
    }
};