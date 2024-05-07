#include <iostream>

class student {

private:

    int administration_number;
    char student_name[20];
    float english, maths, science;
    float total;

    float calculatedTotal() { return english + maths + science; }

public:

    void takeData() {

        std::cout << "Enter admission number: ";
        std::cin >> administration_number;
        std::cout << "Enter student student_name: ";
        std::cin >> student_name;
        std::cout << "Enter marks in english, maths, science: ";
        std::cin >> english >> maths >> science;

        total = calculatedTotal();
    }

    void showData() {
        std::cout   << "Admission number: " << administration_number
                    << "\nStudent student_name: " << student_name
                    << "\nEnglish: " << english << "\nMath: " << maths
                    << "\nScience: " << science << "\nTotal: " << total;
    }
};

int main() {
    student obj; obj.takeData(); obj.showData();
    return 0;
}
