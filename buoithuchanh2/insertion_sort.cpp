#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Main function
int main() {
    int arr[] = { 13, 11, 9, 7, 5, 2 };//11,13,9  1>0 & 13>9 11 13 13    
    int n = sizeof(arr) / sizeof(arr[0]);// 

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//step by step using the example array{ 13, 11, 9, 7, 5, 2 }.
//
//i = 1: We select the second element 11 as the key.We compare 11 with the first
//  element 13 and find that 11 is smaller.Therefore, we shift 13 to the right
//  to make space for 11. The array becomes{ 11, 13, 9, 7, 5, 2 }.
//
//i = 2 : We select the third element 9 as the key.We compare 9 with the 
// second element 13 and find that 9 is smaller.Therefore, we shift 13 to the right to make space for 9. We then compare 9 with the first element 11 and find that 9 is smaller than 11. Therefore, we shift 11 to the right to make space for 9. The array becomes{ 9, 11, 13, 7, 5, 2 }.
//
//i = 3 : We select the fourth element 7 as the key.We compare 7 with the third element 13 and find that 7 is smaller.Therefore, we shift 13 to the right to make space for 7. We then compare 7 with the second element 11 and find that 7 is smaller.Therefore, we shift 11 to the right to make space for 7. We then compare 7 with the first element 9 and find that 7 is smaller.Therefore, we shift 9 to the right to make space for 7. The array becomes{ 7, 9, 11, 13, 5, 2 }.
//
//i = 4 : We select the fifth element 5 as the key.We compare 5 with the fourth element 13 and find that 5 is smaller.Therefore, we shift 13 to the right to make space for 5. We then compare 5 with the third element 11 and find that 5 is smaller.Therefore, we shift 11 to the right to make space for 5. We then compare 5 with the second element 9 and find that 5 is smaller.Therefore, we shift 9 to the right to make space for 5. We then compare 5 with the first element 7 and find that 5 is smaller.Therefore, we shift 7 to the right to make space for 5. The array becomes{ 5, 7, 9, 11, 13, 2 }.
//
//i = 5 : We select the sixth element 2 as the key.We compare 2 with the fifth element 13 and find that 2 is smaller.Therefore, we shift 13 to the right to make space for 2. We then compare 2 with the fourth element 11 and find that 2 is smaller.Therefore, we shift 11 to the right to make space for 2. We then compare 2 with the third element 9 and find that 2 is smaller.Therefore, we shift 9 to the right to make space for 2. We then compare 2 with the second element 7 and find that 2 is smaller.Therefore, we shift 7 to the right to