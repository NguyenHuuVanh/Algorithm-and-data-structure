#include <iostream>
#include <stack>
#include <string>
#include <string.h>
#include <cctype>
using namespace std;

bool IsOperand(char c)
{
    return isdigit(c); // Hàm trả về giá trị khác 0 nếu kí tự là số và 0 về kí tự không phải là số
}

double EvaluePrefix(string s)
{
    stack<double> stack;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (IsOperand(s[i]))
        {
            stack.push(s[i] - '0');
        }
        else
        {
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            switch (s[i])
            {
            case '+':
            {
                stack.push(a + b);
            }
            break;
            case '-':
            {
                stack.push(a - b);
            }
            break;
            case '*':
            {
                stack.push(a * b);
            }
            break;
            case '/':
            {
                stack.push(a / b);
            }
            break;
            }
        }
    }
    return stack.top();
}

int main()
{
    string s;
    cout << "Nhap chuo tien to:";
    cin >> s;
    cout << EvaluePrefix(s) << endl;
}
