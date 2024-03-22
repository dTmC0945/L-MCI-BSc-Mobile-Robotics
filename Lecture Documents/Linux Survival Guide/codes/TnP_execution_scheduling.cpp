#include <thread>   // used for accessing threads

bool brewing = true;    // set initial boolean value

// initial function for brewing coffee
void coffee_brewing(const char *name) {
    unsigned int coffee_count = 0;  // create coffee variable
    while (brewing) {   // while brewing is true increase count
        coffee_count++;
    }
    // prints out the number of coffee brewed by a thread name
    printf("%s brewed %u coffee.\n", name, coffee_count);
}

int main() {    // define the main function
    // Create threads
    std::thread Orange(coffee_brewing, "Orange");
    std::thread Blue(coffee_brewing, "Blue");
    // Create initial state for the threads
    printf("Orange and Blue are brewing coffees...\n");
    // Forces the threads to work for only 1 second
    std::this_thread::sleep_for(std::chrono::seconds(1));
    brewing = false;    // sets brewing false
    Orange.join();  // terminates the orange thread.
    Blue.join();    // terminates the blue thread.
}