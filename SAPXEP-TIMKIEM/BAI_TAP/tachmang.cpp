#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

void nhapmang(int a[], int na)
{
    for (int i = 0; i < na; i++)
    {
        cout << "Nhap arr[" << i << "]:";
        cin >> a[i];
    }
}
void xuatmang(int a[], int na)
{
    for (int i = 0; i < na; i++)
    {
        cout << "arr[" << i << "]:" << a[i] << "    ";
    }
}

bool SNT(int &n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if ((n % i == 0) || n == 1 || n == 0)
        {
            return false;
        }
    }
    return true;
}

void tachmang(int a[], int na, int b[], int &nb, int c[], int &nc)
{
    nb = nc = 0;
    for (int i = 0; i < na; i++)
    {
        if (SNT(a[i]))
        {
            b[nb] = a[i];
            nb++;
        }
        else
        {
            c[nc] = a[i];
            nc++;
        }
    }
}

int main()
{
    int a[MAX], b[MAX], c[MAX], na, nb, nc;
    cout << "Nhap so luong phan tu:";
    cin >> na;
    nhapmang(a, na);
    tachmang(a, na, b, nb, c, nc);
    cout << "Xuat mang b gom cac so nguyen to " << endl;
    xuatmang(b, nb);
    cout << "\nXuat mang c la cac so con lai " << endl;
    xuatmang(c, nc);
    system("Pause");
}
