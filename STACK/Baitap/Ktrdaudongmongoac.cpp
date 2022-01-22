#include <iostream>
#include <stack>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s;
    stack<char> stack;
    cout << "Nhap chuoi:";
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == '(')
        {
            stack.push(s[i]);
        }
    }
    // int count = 0, flag = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == ')')
        {
            // stack.top();
            // count++;
            stack.pop();
        }
        // flag++;
    }
    // if ((flag - count) == count)
    // {
    //     cout << "Chuoi () hop le!" << endl;
    // }
    // else
    // {
    //     cout << "Chuoi () khong hop le!" << endl;
    // }
    if (stack.empty() == false)
    {
        cout << "Chuoi () hop le!" << endl;
    }
    else
    {
        cout << "Chuoi () khong hop le!" << endl;
    }
}