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

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
// cách 1: pivol là phần tử cuối mảng
// int partition(int arr[], int low, int high)
// {
//     int pivol = arr[high];
//     int i = low - 1;
//     for (int j = low; j <= high - 1; j++)
//     {
//         if (arr[j] < pivol)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
//          và là phần tử chia mảng làm 2 mảng con trái & phải */
//         int pi = partition(arr, low, high);

//         // Gọi đệ quy sắp xếp 2 mảng con trái và phải
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }
void quickSort(int arr[], int left, int right)
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
        quickSort(arr, left, j);
    }
    if (i < right)
    {
        quickSort(arr, i, right);
    }
}

int main()
{
    int n, arr[100];
    cout << "Nhap so luong mang:";
    cin >> n;
    nhapmang(arr, n);
    quickSort(arr, 0, n - 1);
    xuatmang(arr, n);
}