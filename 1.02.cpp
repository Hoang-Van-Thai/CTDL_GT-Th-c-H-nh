
//Viết hàm đệ quy tính tổng của biểu thức sau đây: 
// S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!
//


#include <iostream>
using namespace std;
float giaithua(int n)
{
    if (n == 1) return 1;
    return n * giaithua(n - 1);
}
float sumEven(float x,int n)
{
    if (n==1)      return x;
 
    return( pow(x, n) / giaithua(n))+sumEven(x,n-1);
}
int main()
{
    cout << sumEven(2, 3);//8/6+4/2+2
    return 0;
}