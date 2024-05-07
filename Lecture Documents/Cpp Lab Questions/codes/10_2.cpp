#include<iostream>

int main() {

    int n; int i; int max = 0;
    std::cout << "Enter number of values:"; std::cin >> n;
    std::cout << "Enter values in array:\n";
    int arr[n];

    for (i = 0; i < n; i++) { std::cin >> arr[i]; }
    for (int u = 0; u <= n; u++) { if (arr[u] > max) { max = arr[u]; } }

    int *pointer = &max;
    std::cout << "Largest integer value in the array is " << *pointer;
    return 0;
}
