#include <iostream>
#include <string>

class Examination {

private:
    int test_code;
    std::string description;
    int number_of_candidates;
    int requiredCentres;
    int calculatedCentres() { return number_of_candidates / 100 + 1; }

public:
    void schedule();
    void showData();
};

void Examination::schedule() {

    std::cout << "Enter Test code: ";
    std::cin >> test_code;
    std::cout << "Enter no of candidates: ";
    std::cin >> number_of_candidates;
    std::cin.ignore();
    std::cout << "Enter description: " << std::endl;
    getline(std::cin, description);
    requiredCentres = calculatedCentres();
}

void Examination::showData() {

    std::cout << "Test code: " << test_code
              << "\nDescripton: " << description
              << "\nNo of candidate: " << number_of_candidates
              << "\nCenter required: " << requiredCentres;
}

int main() {
    Examination obj;
    obj.schedule(); obj.showData();
    return 0;
}
