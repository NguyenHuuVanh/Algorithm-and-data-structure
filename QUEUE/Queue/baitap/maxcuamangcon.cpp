#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void max(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int max = arr[i];
        for (int j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
            {
                max = arr[i + j];
            }
        }
        cout << max << "\t";
    }
}

int main()
{
    int arr[100], n, k;
    cout << "Nhap so luong phan tu:";
    cin >> n;
    input(arr, n);
    cout << "Nhap k:";
    cin >> k;
    max(arr, n, k);
}