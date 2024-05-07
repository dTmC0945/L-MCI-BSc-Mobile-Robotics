#include <iostream>
#include <string>

class Book {
    int book_number;
    std::string book_title;
    float book_price;

    void totalCost(int N) {
        float total_cost;
        total_cost = book_price * N;
        std::cout << total_cost;
    }

public:

    void input() {
        std::cout << "Enter Book Number ";
        std::cin >> book_number;
        std::cin.ignore();
        std::cout << "Enter Book Title ";
        getline(std::cin, book_title);
        std::cout << "Enter price per copy ";
        std::cin >> book_price;
    }

    void purchase() {
        int n;
        std::cout << "Enter number of copies to purchase ";
        std::cin >> n;
        std::cout << "Total cost is ";
        totalCost(n);
    }
};

int main() {
    Book obj;
    obj.input();
    obj.purchase();
    return 0;
}
