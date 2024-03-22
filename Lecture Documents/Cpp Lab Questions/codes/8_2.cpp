#include <iostream>

class Batsman {
    int batsman_code;
    char batsman_name[20];
    int runs, number_of_timeouts;
    float batting_average;
    void calculatedAverage() {
        batting_average = (runs / number_of_timeouts);
    }

public:
    void readData();
    void displayData();
};

void Batsman::readData() {
    std::cout << "Enter Batsman code: ";
    std::cin >> batsman_code;
    std::cout << "Enter Batsman student_name: ";
    std::cin >> batsman_name;
    std::cout << "Enter runs scored and number of time outs ";
    std::cin >> runs >> number_of_timeouts;
    calculatedAverage();
}

void Batsman::displayData() {

    std::cout << "Batsman code: " << batsman_code
              << "\nBatsman student_name: " << batsman_name
              << "\nRuns Scored: " << runs
              << "\nNumber of Timeouts: " << number_of_timeouts
              << "\nBatting Average " << batting_average;
}

int main() {

    Batsman obj;

    obj.readData();
    obj.displayData();

    return 0;
}
