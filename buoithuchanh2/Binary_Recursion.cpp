//Đệ quy nhị phân là một loại đệ quy trong đó một hàm gọi chính nó hai lần, thường là với hai đối số khác nhau. Đệ quy nhị phân thường được sử dụng để chia một bài toán thành hai bài toán con nhỏ hơn, giải từng bài toán con theo cách đệ quy, rồi kết hợp các kết quả.
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) { // base case
        return 0;
    }
    else if (n == 1) { // base case
        return 1;
    }
    else { // recursive case
        return fibonacci(n - 1) + fibonacci(n - 2); // binary recursive call
    }
}

int main() {
    int n = 6;
    cout << "The " << n << "th number in the Fibonacci sequence is " << fibonacci(n) << endl;
    return 0;
}
