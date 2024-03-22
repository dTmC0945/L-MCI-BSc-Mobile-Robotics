#include<iostream>

void accept(int Arr[], int s) {
    for (int I = 0; I < s; I++) {
        std::cout << "Enter element " << I + 1 << ":"; std::cin >> Arr[I];
    }
}
void display(int Arr[], int s) {
    std::cout << "The elements of the array are:\n";
    for (int I = 0; I < s; I++){ std::cout << Arr[I] << " "; }
}
void insertionSort(int Arr[], int s) {
    int I, J, Temp;
    for (I = 1; I < s; I++) { Temp = Arr[I]; J = I - 1;
        while ((Temp < Arr[J]) && (J >= 0)) { Arr[J + 1] = Arr[J]; J--; }
        Arr[J + 1] = Temp;
    }
}
void selectionSort(int Arr[], int s) {
    int I, J, Temp, Small;
    for (I = 0; I < s - 1; I++) { Small = I;
        for (J = I + 1; J < s; J++)   //finding the smallest element
            if (Arr[J] < Arr[Small]){ Small = J; }

        if (Small != I) { Temp = Arr[I]; Arr[I] = Arr[Small]; Arr[Small] = Temp; }
    }
}

void bubbleSort(int Arr[], int s) {
    int I, J, Temp;
    for (I = 0; I < s - 1; I++) {
        for (J = 0; J < (s - 1 - I); J++)
            if (Arr[J] > Arr[J + 1]) {
                Temp = Arr[J];    //swapping
                Arr[J] = Arr[J + 1];
                Arr[J + 1] = Temp;
            }
    }
}

int main() {
    int Arr[100], n, choice;
    std::cout << "Enter Size of Array "; std::cin >> n;
    do {
        std::cout << "\n\nMENU";
        std::cout << "\n1. Accept elements of array";
        std::cout << "\n2. Display elements of array";
        std::cout << "\n3. Sort the array using insertion sort method";
        std::cout << "\n4. Sort the array using selection sort method";
        std::cout << "\n5. Sort the array using bubble sort method";
        std::cout << "\n6. Exit";
        std::cout << "\n\nEnter your choice 1-6 :";
        std::cin >> choice;

        switch (choice) {
            case 1: { accept(Arr, n); break; }
            case 2: { display(Arr, n); break; }
            case 3: { insertionSort(Arr, n); break; }
            case 4: { selectionSort(Arr, n); break;}
            case 5: { bubbleSort(Arr, n); break;}
            case 6: { break;}
            default: { std::cout << "\nInvalid choice"; }
        }
    } while (choice != 6);

    return 0;
}

