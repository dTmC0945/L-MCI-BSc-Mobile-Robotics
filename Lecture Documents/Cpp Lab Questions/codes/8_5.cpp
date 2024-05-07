#include <iostream>
#include <string>

class Report {
    int admission_number; std::string student_name;
    float marks[5], average;
    void getAverage() {
        average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    }

public:
    void readInformation(); void showData();
};

void Report::readInformation() {
    do {
        std::cout << "Enter 4-digit admission number: ";
        std::cin >> admission_number;
    } while (admission_number < 999 || admission_number > 10000);
    std::cin.ignore();
    std::cout << "Enter student_name: ";
    getline(std::cin, student_name);
    std::cout << "Enter marks in: ";

    for (int i = 0; i < 5; i++) {
        std::cout << "Subject: " << i + 1 << ":";
        std::cin >> marks[i];

    };
    getAverage();
}

void Report::showData() {
    std::cout << "Admission number: " << admission_number << " Name: " << student_name
              << " Marks are: " << marks[0] << " " << marks[1] << " " << marks[2]
              << " " << marks[3] << " " << marks[4] << " Average: " << average;
}

int main() {
    Report obj; obj.readInformation(); obj.showData();
    return 0;
}