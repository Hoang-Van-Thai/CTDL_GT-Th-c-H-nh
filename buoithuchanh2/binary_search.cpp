//Tìm kiếm nhị phân (binary search) là một thuật toán tìm kiếm phổ biến và hiệu quả để tìm kiếm
//một phần tử trong một danh sách đã được sắp xếp theo thứ tự tăng dần (hoặc giảm dần).



#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // Nếu phần tử ở giữa danh sách là phần tử cần tìm, trả về chỉ số của nó
        if (arr[mid] == x)
            return mid;

        // Nếu phần tử ở giữa danh sách lớn hơn phần tử cần tìm, tìm kiếm trong nửa bên trái của danh sách
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Nếu phần tử ở giữa danh sách nhỏ hơn phần tử cần tìm, tìm kiếm trong nửa bên phải của danh sách
        return binarySearch(arr, mid + 1, r, x);
    }

    // Nếu không tìm thấy phần tử, trả về -1
    return -1;
}

// Hàm main
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Khong tim thay " << x << " trong danh sach";
    else
        cout << x << " co trong danh sach tai vi tri " << result;

    return 0;
}
