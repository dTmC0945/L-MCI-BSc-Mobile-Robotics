#include <iostream>

int squareByValue( int ); // function prototype (value pass)
void squareByReference( int & ); // function prototype (reference pass)

int main()
{
    int x = 2; // value to square using squareByValue
    int z = 4; // value to square using squareByReference
    // demonstrate squareByValue
    std::cout << "x = " << x << " before squareByValue\n";
    std::cout << "Value returned by squareByValue: "
         << squareByValue( x ) << std::endl;
    std::cout << "x = " << x << " after squareByValue\n" << std::endl;
    // demonstrate squareByReference
    std::cout << "z = " << z << " before squareByReference" << std::endl;
    squareByReference( z );
    std::cout << "z = " << z << " after squareByReference" << std::endl;
    return 0; // indicates successful termination
} // end main

// squareByValue multiplies number by itself, stores the
// result in number and returns the new value of number
int squareByValue( int number )
{
    return number *= number; // caller's argument not modified
} // end function squareByValue

// squareByReference multiplies numberRef by itself and stores the result
// in the variable to which numberRef refers in function main
void squareByReference( int &numberRef )
{
    numberRef *= numberRef; // caller's argument modified
} // end function squareByReference
