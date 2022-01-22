#include <iostream>
#include <string.h>
#include <string>
using namespace std;

// char sosanh(char S[])
// {
//     char temp;
//     for (int i = 0; i < strlen(S) - 1; i++)
//     {
//         for (int j = i + 1; j < strlen(S); j++)
//         {
//             if (S[i] > S[j])
//             {
//                 temp = S[i];
//                 S[i] = S[j];
//                 S[j] = temp;
//             }
//         }
//     }
// }

int main()
{
    int n, count = 0;
    cout << "Nhap n:";
    char *S = new char[n];
    cin.ignore();
    cout << "Nhap mang:";
    cin >> S;
    for (int i = 0; i < strlen(S); i++)
    {
        if ((S[i]) >= 'A' && S[i] <= 'Z')
        {
            count++;
        }
    }
    cout << "Co " << count << " Phan tu la chu Hoa trong mang!" << endl;
    for (int i = 0; i < strlen(S); i++)
    {
        if ((S[i]) >= 'A' && S[i] <= 'Z')
        {
            cout << S[i] << "\t";
        }
    }
    cout << endl;
    char temp;
    for (int i = 0; i < strlen(S) - 1; i++)
    {
        for (int j = i + 1; j < strlen(S); j++)
        {
            if (S[i] > S[j])
            {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
    for (int i = 0; i < strlen(S); i++)
    {
        if ((S[i]) >= 'A' && S[i] <= 'Z')
        {
            S[i] += 32;
            cout << S[i] << "\t";
        }
    }
    int dem = 0;
    for (int i = 0; i < strlen(S); i++)
    {
        S[i] -= 32;
        if (S[i] == 'O')
        {

            dem++;
        }
    }
    cout << "\nCo " << dem << " ki tu trung voi ki tu dau tien cua ten Oanh trong mang!" << endl;
}
