#include <iostream>
#include <string>
using namespace std;

struct SINHVIEN
{
    string masv, hoten;
    float DTB, DRL, DTL;
};
typedef SINHVIEN SV;

void nhap(SV &sv);
void nhapN(SV a[], int n);
void xuat(SV sv);
void xuatN(SV a[], int n);
float DTL(SV sv);
void xuatDTLN(SV a[], int n);
void sapxep(SV a[], int n);

void nhap(SV &sv)
{
    cout << "Nhap ma sinh vien:";
    cin >> sv.masv;
    cin.ignore();
    cout << "Nhap ho ten:";
    getline(cin, sv.hoten);
    cout << "Nhap diem trung binh:";
    cin >> sv.DTB;
    cout << "nhap diem ren luyen:";
    cin >> sv.DRL;
}

void nhapN(SV a[], int n)
{
    cout << "\n------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        nhap(a[i]);
    }
    cout << "-------------------------------------\n";
}

void xuat(SV sv)
{
    cout << " Ma sinh vien:" << sv.masv << endl;
    fflush(stdin);
    cout << " Ten:" << sv.hoten << endl;
    cout << "Diem trung binh:" << sv.DTB << endl;
    cout << "Diem Ren Luyen:" << sv.DRL << endl;
}

void xuatN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin sinh vien thu " << i + 1 << " la:" << endl;
        xuat(a[i]);
    }
    cout << "-------------------------------------\n";
}

float DTL(SV sv)
{
    return (sv.DTB + sv.DRL) / 2;
}

void xuatDTLN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin diem tich luy cua sinh vien thu " << i + 1 << " la:" << endl;
        cout << DTL(a[i]) << endl;
    }
    cout << "-------------------------------------\n";
}

void sapxep(SV a[], int n)
{
    SV tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].DRL < a[i].DRL)
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}

int main()
{
    int n, key;
    bool Danhap = false;
    do
    {
        cout << "Nhap so luong sinh vien:";
        cin >> n;
    } while (n <= 0);

    SV a[n];

    while (true)
    {
        cout << "\n";
        cout << "*******************************************************" << endl;
        cout << "**      CHUONG TRINH QUAN LY SINH VIEN               **" << endl;
        cout << "**           1.Nhap du lieu                          **" << endl;
        cout << "**           2.In danh sach sinh vien                **" << endl;
        cout << "**           3.Xem diem tich luy                     **" << endl;
        cout << "**           4.Xem thong tin sv co diem RL tang dan  **" << endl;
        cout << "**           5.                                      **" << endl;
        cout << "**           6.                                      **" << endl;
        cout << "**           7.                                      **" << endl;
        cout << "**           8.                                      **" << endl;
        cout << "**           9.                                      **" << endl;
        cout << "**           10.                                     **" << endl;
        cout << "**           0.Thoat                                 **" << endl;
        cout << "*******************************************************" << endl;
        cout << "**           Nhap lua chon cua ban:                  **" << endl;
        cin >> key;

        switch (key)
        {
        case 1:
            cout << "Ban da chon nhap danh sach sinh vien!";
            nhapN(a, n);
            cout << "Ban da nhap thanh cong danh sach sinh vien!" << endl;
            Danhap = true;
            cout << "Nhap phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;
        case 2:
            if (Danhap)
            {
                cout << "\nBan da chon xuat danh sach sinh vien!";
                xuatN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "\nNhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;
        case 3:
            if (Danhap)
            {
                cout << "\nBan da chon xem diem ren luyen cua sinh vien!";
                xuatDTLN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "\nNhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;
        case 4:
            if (Danhap)
            {
                cout << "\nBan da chon xem diem ren luyen tang dan cua sinh vien!";
                sapxep(a, n);
                xuatN(a, n);
            }
        case 0:
            cout << "\nBan da chon thoat chuong trinh!";
            system("pause");
            return 0;
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nBam phim bat ky de tiep tuc!\n";
            system("pause");
            break;
        }
    }
}
