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

void sapxep(int a[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void Divide(int a[], int n)
{
    cout << "\nCac phan tu chia het cho 5 la ";
    sapxep(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            cout << a[i] << "  ";
        }
    }
}

int EvenNumbers(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 100 && a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

long int AddNumbers(int a[], int n)
{
    long int sum = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0 && a[i] < 100)
        {
            sum *= a[i];
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
    Divide(a, n);
    cout << "\nCo " << EvenNumbers(a, n) << " so chan lon hon 100!" << endl;
    cout << "Tich cac phan tu chia het cho 5 va nho hon 100 la " << AddNumbers(a, n) << endl;
}