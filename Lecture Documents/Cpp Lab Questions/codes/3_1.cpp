#include<iostream>
#include<cmath>

int main()
{
    float P,R,T,CI;
    std::cout<<"Enter Principal (P), Rate (R) and Time (T): ";
    std::cin>>P>>R>>T;
    CI=P*pow((1+R/100),T) - P;
    std::cout<<"Compound Interest is: "<<CI;
    return 0;
}  