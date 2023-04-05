//Đệ quy hàm mũ là một loại đệ quy trong đó hàm thực hiện hai hoặc nhiều lệnh gọi đệ quy cho mỗi lệnh gọi đệ quy mà nó nhận được.Nó cũng đôi khi được gọi là nhiều đệ quy.
#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0) { // base case 1
        return 0;
    }
    else if (n == 1 || n == 2) { // base case 2
        return 1;
    }
    else { // recursive case
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3); // three recursive calls
    }
}

int main() {
    int n = 6;
    cout << "The " << n << "th number in the Tribonacci sequence is " << tribonacci(n) << endl;
    return 0;
}
