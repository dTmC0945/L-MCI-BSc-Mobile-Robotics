#include<iostream>

int main() {
    int Arr[100], n, temp, i, j;
    std::cout << "Enter number of elements you want to insert: "; std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ":"; std::cin >> Arr[i];
    }
    for (i = 0, j = n - 1; i < n / 2; i++, j--) {
        temp = Arr[i]; Arr[i] = Arr[j]; Arr[j] = temp;
    }

    std::cout << "\nReverse array" << std::endl;
    for (i = 0; i < n; i++){ std::cout << Arr[i] << " ";}
    return 0;
}
