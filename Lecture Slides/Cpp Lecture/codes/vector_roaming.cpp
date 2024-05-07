    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> v = {1, 2, 3, 4, 5, 6};
        for (int x: v)      // for each x in v
            std::cout << x << "\n";
    }
