#include <thread>

void Barista_Orange() {
    printf("Orange started grinding coffee beans...\n");
    std::this_thread::sleep_for(std::chrono::seconds(3));
    printf("Orange is done grinding coffee beans.\n");
}

int main() {
    printf("Blue requests Orange's help.\n");
    std::thread Orange(Barista_Orange);
    printf("Is Orange is available? %s\n", Orange.joinable() ? "true" : "false");

    printf("Blue continues heating up a panini.\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    printf("Is Orange is available? %s\n", Orange.joinable() ? "true" : "false");

    printf("Blue patiently waits for Orange to finish and join...\n");
    Orange.join();
    printf("Is Orange is available? %s\n", Orange.joinable() ? "true" : "false");

    printf("Blue and Orange are both done serving the customer!");

    return 0;
}