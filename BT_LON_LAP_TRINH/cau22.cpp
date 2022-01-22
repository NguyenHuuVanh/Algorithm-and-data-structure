#include <iostream>
using namespace std;

int giaithua(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * giaithua(a - 1);
}

// float sumS(int n)
// {
//     float S = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         S += n / ((n - i) * (n - (i + 1)));
//     }
//     return S;
// }

int main()
{
    int n, a, b, c;
    cout << "Nhap n,a,b,c:";
    cin >> n >> a >> b >> c;
    // cout << "S= " << sumS(n) << endl;
    cout << "P= " << giaithua(a) + giaithua(b) + giaithua(c);
}