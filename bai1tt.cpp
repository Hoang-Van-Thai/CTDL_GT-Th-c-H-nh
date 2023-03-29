//Cho mảng 1 chiều các số nguyên.Viết hàm tính tổng các số
//chẵn trong mảng bằng phương pháp đệ quy



#include <iostream>
using namespace std;

int sumEven(int arr[], int size, int index = 0, int sum = 0) 
{
    if (index == size) {
        return sum;
    }
    if (arr[index] % 2 == 0) {
        sum += arr[index];
    }
    return sumEven(arr, size, index + 1, sum);
}
int main() 
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumEven(arr, size);
    cout << "Tong cac so chan trong mang la: " << result << endl; 
    return 0;
}