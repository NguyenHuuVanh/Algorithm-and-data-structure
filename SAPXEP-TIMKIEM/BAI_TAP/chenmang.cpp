
#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;

bool Even(int m)
{
    if (m % 2 != 0)
    {
        return false;
    }
    return true;
}

void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> arr[i];
    }
}
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "   ";
}

void themphantu(int arr[], int &n, int vitrithem, int phantuthem)
{
    for (int i = n; i > vitrithem; i--)
    {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[vitrithem] = phantuthem;
}

void chen(int arr[], int &n, int chenso)
{
    for (int i = 0; i < n; i++)
    {
        if (Even(arr[i]))
        {
            themphantu(arr, n, i + 1, chenso);
        }
    }
}

int main()
{
    int arr[MAX], n;
    cout << "\nNhap so luong phan tu: ";
    cin >> n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    int chenso;
    cout << "\nNhap so can chen sau SNT trong mang: ";
    cin >> chenso;
    chen(arr, n, chenso);
    XuatMang(arr, n);
}