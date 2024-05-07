#include<iostream> // to access io functions

int main() {
    double fahrenheit;  // store the fahrenheit value
    double celsius = 0.0; // set initial celsius value
    std::cout << "\nEnter temperature in Fahrenheit : ";
    std::cin >> fahrenheit; // gets fahrenheit value
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;  // calculate celsius value
    std::cout << "Temperature in Celsius is : " << celsius;
    return 0;
}