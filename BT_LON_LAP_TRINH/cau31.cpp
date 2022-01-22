#include <iostream>
#define MAX 100
using namespace std;

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]=";
        cin >> arr[i];
    }
}

void inmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void sapxep(int arr[], int n) // BubbleSort
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void inphantu(int arr[], int n)
{
    sapxep(arr, n);
    float tbc = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        tbc = (arr[0] + arr[n - 1]) / 2.0;
        if (arr[i] < tbc)
        {
            count++;
        }
    }
    cout << "Co " << count << " phan tu nho hon " << tbc << " trong mang!" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < tbc)
        {
            cout << arr[i] << "\t";
        }
    }
}

long int tich(int arr[], int n)
{
    sapxep(arr, n);
    long int sumN = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[0] + arr[n - 1];
        if (arr[i] > sum)
        {
            sumN *= arr[i];
        }
    }
    cout << "Tich cac phan tu lon hon " << sum << " la " << sumN << endl;
    return sumN;
}

int main()
{
    int arr[MAX], n;
    do
    {
        cout << "Nhap so luong phan tu:";
        cin >> n;
    } while (n <= 0 || n > MAX);
    nhapmang(arr, n);
    cout << "\n";
    inmang(arr, n);
    cout << "\n\n________ IN MANG SAU KHI SAP XEP _________" << endl;
    sapxep(arr, n);
    cout << "\n";
    inmang(arr, n);
    cout << "\n____________________________________________" << endl;
    cout << "\n";
    inphantu(arr, n);
    cout << "\n____________________________________________" << endl;
    cout << "\n";
    tich(arr, n);
    system("pause");
}