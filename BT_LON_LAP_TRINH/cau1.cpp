#include <iostream>
#include <string.h>
#include <string>
#define PI 3.14
using namespace std;

float chuvihcn(float &a, float &b)
{
    return 2 * (a + b);
}
float chuvihv(float &a)
{
    return 4 * a;
}
float chuviht(float &r)
{
    return 2 * PI * r;
}

int main()
{
    char s1[] = "HINH CHU NHAT", s2[] = "HINH VUONG", s3[] = "HINH TRON";
    int key;
    cout << "\n";
    cout << "***************************************" << endl;
    cout << "* CHUONG TRINH TINH CHU VI CAC HINH   *" << endl;
    cout << "* " << s1 << "                       *" << endl;
    cout << "* " << s2 << "                          *" << endl;
    cout << "* " << s3 << "                           *" << endl;
    cout << "* Nhan so 1 de bat dau!               *" << endl;
    cout << "***************************************" << endl;

    do
    {
        cin >> key;
        cout << "Nhap lai:";
    } while (key != 1);

    switch (key)
    {
    case 1:
        float m, n;
        cout << "Ban da chon nhap hinh chu nhat!" << endl;
        cout << "Moi ban nhap chieu dai : ";
        cin >> m;
        cout << "Moi ban nhap chieu rong: ";
        cin >> n;
        cout << "Chu vi hinh chu nhat la " << chuvihcn(m, n) << endl;
    case 2:
        float a;
        cout << "Ban da chon nhap hinh vuong!" << endl;
        cout << "Moi ban nhap chieu canh : ";
        cin >> a;
        cout << "Chu vi hinh vuong la " << chuvihv(a) << endl;
    case 3:
        float r;
        cout << "Ban da chon nhap hinh tron!" << endl;
        cout << "Moi ban nhap ban kinh : ";
        cin >> r;
        cout << "Chu vi hinh tron la " << chuviht(r) << endl;
    case 4:
        float max = chuvihcn(m, n);
        if (max == chuvihv(a) == chuviht(r))
        {
            cout << "Chu vi cua ca ba hinh bang nhau : " << max << endl;
            return 0;
        }
        if (max == chuvihv(a))
        {
            if (chuviht(r) > max)
            {
                cout << "Chu vi " << strlwr(s3) << " lon nhat :" << chuviht(r) << " chu vi hinh vuong bang chu vi hinh chu nhat : " << max << endl;
                return 0;
            }
            else
            {
                cout << " chu vi hinh vuong bang chu vi hinh chu nhat : " << max << " chu vi " << strlwr(s3) << " :" << chuviht(r) << endl;
                return 0;
            }
        }
        if (max == chuviht(r))
        {
            if (chuviht(r) > chuvihv(a))
            {
                cout << " chu vi hinh vuong bang chu vi hinh tron : " << max << " chu vi " << strlwr(s2) << " :" << chuvihv(a) << endl;
                return 0;
            }
            else
            {
                cout << " chu vi " << strlwr(s2) << " : " << chuvihv(a) << " chu vi hinh vuong bang chu vi hinh tron : " << max << endl;
                return 0;
            }
        }
        if (chuvihv(a) == chuviht(r))
        {
            if (max > chuvihv(a))
            {
                cout << "chu vi hinh chu nhat : " << max << " chu vi " << strlwr(s2) << " bang chu vi " << strlwr(s3) << " : " << chuvihv(a) << endl;
                return 0;
            }
            else
            {
                cout << " chu vi " << strlwr(s2) << " bang chu vi " << strlwr(s3) << " : " << chuvihv(a) << "chu vi hinh chu nhat : " << max << endl;
                return 0;
            }
        }
        if (chuvihv(a) > max && chuvihv(a) >= chuviht(r) && chuviht(r) > max)
        {
            cout << "Chu vi " << strlwr(s2) << ": " << chuvihv(a) << " lon hon chu vi " << strlwr(s3) << ": " << chuviht(r) << " lon hon chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << endl;
        }
        else if (chuvihv(a) > max && chuvihv(a) > chuviht(r) && chuviht(r) < max)
        {
            cout << "Chu vi " << strlwr(s2) << ": " << chuvihv(a) << " lon hon chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << " lon hon chu vi " << strlwr(s3) << ": " << chuviht(r) << endl;
        }
        else if (chuviht(r) > max && chuviht(r) > chuvihv(a) && chuvihv(a) > max)
        {
            cout << "Chu vi " << strlwr(s3) << ": " << chuviht(r) << " lon hon chu vi " << strlwr(s2) << ": " << chuvihv(a) << " lon hon chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << endl;
        }
        else if (chuviht(r) > max && chuviht(r) >= chuvihv(a) && chuvihv(a) < max)
        {
            cout << "Chu vi " << strlwr(s3) << ": " << chuviht(r) << " lon hon chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << " lon hon chu vi " << strlwr(s2) << ": " << chuvihv(a) << endl;
        }
        else if (chuvihv(a) < chuviht(r))
        {
            cout << "Chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << " lon hon chu vi " << strlwr(s3) << ": " << chuviht(r) << " lon hon chu vi " << strlwr(s2) << ": " << chuvihv(a) << endl;
        }
        else
        {
            cout << "Chu vi " << strlwr(s1) << ": " << chuvihcn(m, n) << " lon hon chu vi " << strlwr(s2) << ": " << chuvihv(a) << " lon hon chu vi " << strlwr(s3) << ": " << chuviht(r) << endl;
        }
        system("pause");
        return 0;
    }
}