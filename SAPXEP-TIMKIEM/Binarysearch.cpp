#include <iostream>
using namespace std;

//      1 2 3 4 5 6 7 8  cần tìm số 7
// index:0 1 2 3 4 5 6 7  left=0 right=7 middle=7/2=3;
// ta thấy 7 > middle nên left=middle+1=4=>middle=4+7/2=5
// vẫn thấy x>middle nên left=middle +1 =5+1=6=>middle=6+7/2=6=> tìm được x ở vị trí thứ 6;
void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]:";
        cin >> arr[i];
    }
}

int Binarysearch(int arr[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    while (right >= left)
    {
        int middle = (left + right) / 2; // o(1)
        if (x == arr[middle])
        {
            return middle;
        }
        else if (x < arr[middle])
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], n, x;
    cout << "Nhap n:";
    cin >> n;
    cout << "Nhap gia tri can tim:";
    cin >> x;
    nhapmang(arr, n);
    int result = Binarysearch(arr, n, x);
    if (result == -1)
    {
        cout << "Khong tim thay gia tri can tim!";
    }
    else
    {
        cout << "Tim thay gia tri can tim o vi tri thu " << result;
    }
}
