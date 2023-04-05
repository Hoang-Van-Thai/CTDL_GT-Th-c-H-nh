#include <iostream>
using namespace std;

// Function to perform interchange sort
void interchangeSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Main function
int main() {
    int arr[] = { 13, 11, 9, 7, 5, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    interchangeSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}