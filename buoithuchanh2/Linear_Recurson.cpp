//Đệ quy tuyến tính là một loại đệ quy trong đó một hàm tự gọi chính xác một lần và lời gọi đệ quy được thực hiện ở cuối hàm.Nói cách khác, trong một hàm đệ quy tuyến tính, chỉ có một lệnh gọi đệ quy được thực hiện và nó luôn được thực hiện ở cuối hàm.
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) { // base case
        return 1;
    }
    else {
        return n * factorial(n - 1); // recursive call
    }
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}