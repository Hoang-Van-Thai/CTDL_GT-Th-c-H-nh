//Viết hàm tính số hạng thứ n của hai dãy sau :
//"X(0) = 1
//Y(0) = 0
//X(n) = x(n – 1) + y(n – 1) (n > 0)
//Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)"
#include<iostream>
#include<math.h>
using namespace std;
int x(int n);
int y(int n);
int x(int n)
{
    if (n == 0) return 1;
    return x(n-1) + y(n-1);
} 
int y(int n)
{
    if (n == 0) return 0;
    return 3 * x(n - 1) + 2 * y(n - 1);
}

int main()
{
    cout << x(3) << endl << y(4);
    return 0;
}