struct structureName {
    member1;
    member2;
    member3;
    .
    .
    .
    memberN;
};


struct ClassGrades {  // structure declaration
    // Data Members
    int roll;
    int age;
    int marks;

    // Member Functions
    void printDetails() {
        std::cout << "Roll = " << roll << "\n";
        std::cout << "Age = " << age << "\n";
        std::cout << "Marks = " << marks;
    }
};
