#include <iostream>
#define MAX 100
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

int binarysearch(int arr[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int middle = (left + right) / 2;
    while (right >= left)
    {
        if (x == arr[middle])
        {
            return middle;
        }
        if (x < arr[middle])
        {
            right = middle - 1;
        }
        if (x > arr[middle])
        {
            left = middle + 1;
        }
    }
    return -1;
}

int main()
{
    int n, x, arr[MAX];
    cout << "Nhap so luong phan tu:";
    cin >> n;
    cout << "Nhap gia tri can tim:";
    cin >> x;
    nhapmang(arr, n);
    int result = binarysearch(arr, n, x);
    if (result == -1)
    {
        cout << "Khong tim duoc!" << endl;
    }
    else
    {
        cout << "Tim duoc phan tu " << x << " o vi tri " << result << endl;
    }
}