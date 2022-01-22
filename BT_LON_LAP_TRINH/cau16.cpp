#include <iostream>
using namespace std;

float sumS(int n)
{
    float S = 1;
    for (int i = 2; i <= n; i++)
    {
        S -= 1.0 / i;
    }
    return S;
}

int giaithuaABcong(int a, int b)
{
    int sumAB = 1;
    for (int i = 1; i <= (a + b); i++)
    {

        sumAB *= i;
    }
    return sumAB;
}
int giaithuaABtru(int a, int b)
{
    int sumAB = 1;
    for (int i = 1; i <= (a - b); i++)
    {

        sumAB *= i;
    }
    return sumAB;
}
int giaithua(int a)
{
    int sumA = 1;
    for (int i = 1; i <= a; i++)
    {
        sumA *= i;
    }
    return sumA;
}

int main()
{
    int a, b, n;
    double sum = 0;
    cout << "Nhap n:";
    cin >> n;
    do
    {
        cout << "Nhap a:";
        cin >> a;
        cout << "Nhap b:";
        cin >> b;
    } while (a <= b);
    cout << "S = " << sumS(n) << endl;
    sum += (giaithuaABcong(a, b) / giaithuaABtru(a, b)) + (giaithua(a) / giaithua(b));
    cout << "P = " << sum << endl;
    system("pause");
}