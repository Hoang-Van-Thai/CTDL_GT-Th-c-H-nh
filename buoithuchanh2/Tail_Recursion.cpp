
//Đệ quy đuôi là một loại đệ quy trong đó lời gọi đệ quy là thao tác cuối cùng được thực hiện trong hàm và kết quả của lời gọi đệ quy được trả về ngay lập tức mà không cần xử lý thêm.Điều này có nghĩa là không cần theo dõi các kết quả trung gian hoặc thực hiện bất kỳ tính toán bổ sung nào sau cuộc gọi đệ quy
#include <iostream>
using namespace std;

int factorial(int n, int result) {
    if (n == 0) { // base case
        return result;
    }
    else {
        return factorial(n - 1, n * result); // tail recursive call
    }
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n, 1) << endl;
    return 0;
}
