#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi(6); // vector of 6 integers initialised to 0
    std::vector<string> vs(4); // vector of 4 strings initialised to ""

    vi[202010] = 1978;   //run-time error

}