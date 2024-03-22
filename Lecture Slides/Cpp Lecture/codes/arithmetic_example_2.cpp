    #include <iostream>

    int main()                // inch to cm conversion
    {
        const double cm_per_inch = 2.54;    // number of centimeters per inch
        int length = 1;            // length in inches
        while (length != 0)            // length == 0 is used to exit the program
        {                // a compound statement (a block)
            std::cout << "Please enter a length in inches: ";
            std::cin >> length;
            std::cout << length << "in. = " << cm_per_inch * length << "cm.\n";
        }
    }
