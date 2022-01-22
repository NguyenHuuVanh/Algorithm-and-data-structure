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
        cout << "arr[" << i << "]:" << arr[i] << "    ";
    }
}

void quicksort(int arr[], int left, int right)
{
    int i = left;
    int j = right;
    int pivol = arr[(left + right) / 2];
    while (i <= j)
    {
        while (arr[i] < pivol)
        {
            i++;
        }
        while (arr[j] > pivol)
        {
            j--;
        }
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (left < j)
    {
        quicksort(arr, left, j);
    }
    if (i < right)
    {
        quicksort(arr, i, right);
    }
}

int main()
{
    int arr[100], n;
    cout << "Nhap so luong mang:";
    cin >> n;
    nhapmang(arr, n);
    quicksort(arr, 0, n - 1);
    xuatmang(arr, n);
}