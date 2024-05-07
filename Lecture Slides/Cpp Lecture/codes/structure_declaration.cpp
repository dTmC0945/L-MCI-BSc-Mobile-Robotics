#include <iostream> // accessing the i/o function

struct PointValues {    // defining a structure
    int x, y;   // defining two member variables
    // defining a member function
    int sum(int a, int b){
        return a + b;   // returns the sum
    }
};

int main() {    // declare the main() function
    struct PointValues instance;  // Create an instance of struct
    // define the values in PointValues
    instance.x = 5; instance.y = 10;
    instance.sum(instance.x, instance.y);
}