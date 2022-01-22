#include <iostream>
using namespace std;
#define MAX 100

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]=";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

void uoc(int a[], int n)
{
    int uoc = max(a, n), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (uoc % a[i] == 0)
        {
            count++;
        }
    }
    cout << "Co " << count << " phan tu la uoc cua " << uoc << " co trong mang!" << endl;
    for (int i = 0; i < n; i++)
    {
        if (uoc % a[i] == 0)
        {
            cout << a[i] << "\t";
        }
    }
}

int positivenumbers(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
    }
    return sum;
}

int main()
{
    int n, a[MAX];
    cout << "Nhap sl phan tu:";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "\nPhan tu lon nhat cua mang la " << max(a, n) << endl;
    uoc(a, n);
    cout << "\nTong cac phan tu nguyen duong trong mang la " << positivenumbers(a, n) << endl;
}