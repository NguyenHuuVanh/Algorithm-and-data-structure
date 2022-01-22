#include <iostream>
#include <stack>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Nhap chuoi:";
    getline(cin, s);
    stack<char> stack;
    for (int i = 0; i <= s.length(); i++)
    {
        stack.push(s[i]);
    }
    for (int i = 0; i <= s.length(); i++)
    {
        cout << stack.top();
        stack.pop();
    }
}