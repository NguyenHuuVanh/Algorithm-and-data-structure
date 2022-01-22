#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "   ";
}
bool IsPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void ThemPhanTu(int a[], int &n, int Vitrithem, int Phantuthem)
{
    for (int i = n; i > Vitrithem; i--)
    {
        a[i] = a[i - 1];
    }
    n++;
    a[Vitrithem] = Phantuthem;
}
void ChenSo(int a[], int &n, int Sochen)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            ThemPhanTu(a, n, i + 1, Sochen);
        }
    }
}

int main()
{
    int a[MAX], n;
    cout << "\nNhap so luong phan tu: ";
    cin >> n;
    NhapMang(a, n);
    XuatMang(a, n);
    int Sochen;
    cout << "\nNhap so can chen sau SNT trong mang: ";
    cin >> Sochen;
    ChenSo(a, n, Sochen);
    XuatMang(a, n);
}