#include<iostream>

int main() {

    int Arr[100], n, i, sum = 0;
    std::cout << "Enter number of elements you want to insert: "; std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": "; std::cin >> Arr[i];
    }
    for (i = 0; i < n; i++) { sum += Arr[i]; }

    std::cout << "\nThe sum of Array is: " << sum;
    std::cout << "\nThe average of Array is: " << sum / i;
    return 0;
}
