#include <iostream>
using namespace std;

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]:";
        cin >> arr[i];
    }
}
void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void meger(int arr[], int n, int l, int m, int h)
{
    l = 0;
    h = n - 1;
    m = l + (h - l) / 2;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = h - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + j + 1];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void megersort(int arr[], int n, int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        megersort(arr, n, l, m);
        megersort(arr, n, m + 1, h);
        meger(arr, n, l, m, h);
    }
}

int main()
{
    int n;
    int *arr = new int[n];
    cout << "Nhap so luong mang:";
    cin >> n;
    nhapmang(arr, n);
    megersort(arr, n, 0, n - 1);
    xuatmang(arr, n);
}
