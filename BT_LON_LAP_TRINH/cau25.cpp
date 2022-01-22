#include <iostream>
using namespace std;

int giaithua(int a, int b)
{
    if (a + b == 0 || a + b == 1)
    {
        return 1;
    }
    int B = b - 1;
    return (a + b) * giaithua(a, B);
}

int main()
{
    int a, b;
    cout << "Nhap a,b:";
    cin >> a >> b;
    cout << giaithua(a, b);
}