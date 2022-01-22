#include <iostream>
using namespace std;

struct SINHVIEN
{
    string id, name, date, sex;
    float dtoan, dly, dhoa, dtb;
};
typedef SINHVIEN SV;
void nhap(SV &sv);
void xuat(SV &sv);
void nhapN(SV arr[], int n);
void swap(SV &a, SV &b);
void xuatN(SV arr[], int n);
void heapify(SV arr[], int n, int i);
void Heapsort(SV arr[], int n);

void nhap(SV &sv)
{
    cin.ignore();
    cout << "Nhap ma sinh vien:";
    getline(cin, sv.name);
    fflush(stdin);
    cout << "nhap ten:";
    getline(cin, sv.name);
    cout << "nhap ngay thang nam sinh:";
    getline(cin, sv.date);
    cout << "nhap gioi tinh:";
    getline(cin, sv.sex);
    cout << "Nhap diem toan - ly - hoa:";
    cin >> sv.dtoan >> sv.dly >> sv.dhoa;
}
void xuat(SV &sv)
{
    cout << "Ma: " << sv.id << endl;
    cout << "Ten: " << sv.name << endl;
    cout << "ngay thang nam sinh: " << sv.date << endl;
    cout << "Gioi tinh: " << sv.sex << endl;
    cout << "Diem toan - ly - hoa: " << sv.dtoan << " " << sv.dhoa << " " << sv.dhoa << endl;
    cout << "Diem trung binh: " << (sv.dtoan + sv.dly + sv.dhoa) / 3.0 << endl;
}

void nhapN(SV arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        nhap(arr[i]);
    }
}

void swap(SV &a, SV &b)
{
    SV temp = a;
    a = b;
    b = temp;
}

void xuatN(SV arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Xuat thong tin sinh vien thu " << i + 1 << endl;
        xuat(arr[i]);
    }
}

// void quicksort(SV arr[], int left, int right)
// {
//     int i = left;
//     int j = right;
//     int pivol = arr[(left + right) / 2].dtb;
//     while (i <= j)
//     {
//         while (arr[i].dtb < pivol)
//         {
//             i++;
//         }
//         while (arr[j].dtb > pivol)
//         {
//             j--;
//         }
//         if (i <= j)
//         {
//             swap(arr[i].dtb, arr[j].dtb);
//             i++;
//             j--;
//         }
//     }
//     if (left < j)
//     {
//         quicksort(arr, left, j);
//     }
//     if (i < right)
//     {
//         quicksort(arr, i, right);
//     }
// }
void heapify(SV arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l].dtb > arr[largest].dtb)
    {
        largest = l;
    }
    if (r < n && arr[r].dtb > arr[largest].dtb)
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[i].dtb, arr[largest].dtb);
        heapify(arr, n, largest);
    }
}

void Heapsort(SV arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0].dtb, arr[i].dtb);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cout << "Nhap so luong sinh vien:";
    cin >> n;
    SV arr[n];
    nhapN(arr, n);
    cout << "Xuat sinh vien co diem trung binh tang dan " << endl;
    Heapsort(arr, n);
    xuatN(arr, n);
}
