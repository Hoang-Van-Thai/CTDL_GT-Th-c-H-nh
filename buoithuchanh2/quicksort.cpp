#include <iostream>
using namespace std;

// function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // select the last element as the pivot
    int i = low - 1; // initialize the index of smaller element
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) { // if the current element is smaller than or equal to the pivot
            i++; // increment the index of smaller element
            swap(&arr[i], &arr[j]); // swap arr[i] and arr[j]
        }
    }
    swap(&arr[i + 1], &arr[high]); // swap arr[i+1] and arr[high] (pivot)
    return (i + 1); // return the pivot index
}

// recursive function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high); // partition the array and get the pivot index
        quickSort(arr, low, pivot - 1); // sort the left subarray
        quickSort(arr, pivot + 1, high); // sort the right subarray
    }
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
