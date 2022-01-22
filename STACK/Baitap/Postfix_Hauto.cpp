#include <iostream>
#include <stack>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int n;
    long long temp;
    cout << "Nhap do dai chuoi:";
    cin >> n;
    string s;
    cout << "Nhap chuoi:";
    cin >> s;
    stack<long long> stack;
    int len = s.size();
    while (n--)
    {

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
            {
                long long a = stack.top();
                stack.pop();
                long long b = stack.top();
                stack.pop();
                if (s[i] == '+')
                {
                    temp = b + a;
                }
                else if (s[i] == '-')
                {
                    temp = b - a;
                }
                else if (s[i] == '*')
                {
                    temp = b * a;
                }
                else if (s[i] == '/')
                {
                    temp = b / a;
                }
                else if (s[i] == '^')
                {
                    temp = b;
                    for (int i = 0; i < a; i++)
                    {
                        temp *= b;
                    }
                }
                stack.push(temp);
            }
            else
            {
                stack.push((long long)s[i] - '0');
            }
        }
    }
    cout << stack.top();
}
