#include <iostream>
using namespace std;

float sum(int n)
{
    float sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}

int giaithua(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * giaithua(a - 1);
}

int main()
{
    int n, a, b, c;
    cout << "Nhap n,a,b,c:";
    cin >> n >> a >> b >> c;
    cout << "S = " << sum(n) << endl;
    float P = 1.0 * (giaithua(a) / giaithua(b)) - (giaithua(b) / giaithua(c));
    cout << "P = " << P << endl;
}