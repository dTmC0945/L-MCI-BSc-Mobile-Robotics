    #include <iostream>
    #include <vector>

    int main() {
        std::vector<int> v = {1, 2, 3, 4, 5, 6};
        for (int i = 0; i < v.size(); i++) {
            std::cout << v[i] << "\n";
        }
    }