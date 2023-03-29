//Cho mảng 1 chiều các số thực.
//Hãy viết hàm đệ quy đếm số lượng giá trị dương có trong mảng
#include<iostream>
using namespace std;
int dem(float arr[], int n, int i = 0, int kq = 0)
{
    if (n == 0)
        return 0;
    if (i == n)
    {
        return kq;
    }
    if (arr[i] > 0)
    {
        kq++;
    }
    return dem(arr, n, i+1, kq);
}

int main()
{
    float arr[] = { -1, 2, 3,- 4, -5, -6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << dem(arr, n);
    return 0;
}