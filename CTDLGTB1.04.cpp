// Tính số hạng thứ n của dãy
// "X(0) = 1
// X(n) = n ^ 2.x(0) + (n – 1) ^ 2.x(1) 
// + … + (n – i) ^ 2.x(i) + … + 2 ^ 2.x(n – 2) + 1 ^ 2.x(n – 1)"
#include<iostream>
using namespace std;
long tinhXn(int n)
{
    if (n == 0)
        return 1;
    long s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i * i * tinhXn(n - i);
    }
    return s;
}

int main()
{
    cout<<tinhXn(2);
	return 0;
}