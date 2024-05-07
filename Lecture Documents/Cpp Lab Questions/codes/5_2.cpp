#include<iostream>

int main() {

    int Arr[100], n, i, temp;
    std::cout << "Enter number of elements you want to insert: "; std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ":"; std::cin >> Arr[i];
    }

    temp = Arr[0]; Arr[0] = Arr[n - 1]; Arr[n - 1] = temp;
    std::cout << "\nArray after swapping" << std::endl;

    for (i = 0; i < n; i++){ std::cout << Arr[i] << " "; }

    return 0;
}
