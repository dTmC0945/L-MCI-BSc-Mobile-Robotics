#include <iostream>
#include <thread>
#include <chrono>

void counter_cleaner() {
    while (true) {
        printf("Orange cleaned the counter.\n");
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread Orange(counter_cleaner);
    for (int i=0; i<3; i++) {
        printf("Blue is brewing...\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(600));
    }
    printf("Blue is done!\n");
    Orange.join();
}
