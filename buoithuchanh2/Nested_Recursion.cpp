//Đệ quy lồng nhau là một loại đệ quy trong đó hàm chuyển một lời gọi đệ quy làm đối số cho một lời gọi đệ quy khác. Nói cách khác, hàm gọi chính nó theo cách đệ quy, nhưng thay vì chuyển một kiểu dữ liệu nguyên thủy làm đối số, nó lại chuyển một cuộc gọi đệ quy.
#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    if (m == 0) { // base case 1
        return n + 1;
    }
    else if (n == 0) { // base case 2
        return ackermann(m - 1, 1);
    }
    else { // recursive case
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m = 2;
    int n = 3;
    cout << "The value of the Ackermann function for m=" << m << " and n=" << n << " is " << ackermann(m, n) << endl;
    return 0;
}
