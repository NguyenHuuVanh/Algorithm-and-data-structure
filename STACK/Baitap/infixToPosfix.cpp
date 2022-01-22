#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int prec(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/' || c == '%')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

void infixToPostfix(string s)
{
    stack<char> stack;
    string result; // khai báo một chuỗi để lưu kết quả
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c >= '0' && c <= '9')
        {
            result += c; // Lưu số vào trong kết quả
        }
        else if (c == '(') // nếu gặp dấu ( mở ngoặc
        {
            stack.push(c); // thì push dấu ( vào stack
        }
        else if (c == ')') // Nếu gặp dấu ) đóng ngoặc
        {
            while (stack.top() != '(') // duyệt chừng nào top khác dấu đóng ngoặc
            {
                result += stack.top(); // in ra đồng thời xoá nó đi
                stack.pop();
            }
            stack.pop(); // lúc này trong stack chỉ còn dấu ( nên xoá nó đi
        }
        else
        {
            while (!stack.empty() && prec(s[i]) <= prec(stack.top())) // Nếu stack không rỗng và giá trị toán tử của
            // kí tự đang được scan bé hơn hoặc bằng giá trị toán tử của top
            {
                result += stack.top(); // thì in nó ra
                stack.pop();           //đồng thời xoá khỏi stack
            }
            stack.push(c); // nếu lớn hơn thì push vào stack
        }
    }
    while (!stack.empty()) // Duyệt nếu stack không rỗng
    {
        result += stack.top(); // thì in toán tử còn lại trong stack
        stack.pop();           //đồng thời huỷ nó đi
    }
    cout << "Chuoi hau to la: " << result << endl;
}

int main()
{
    string s;
    cout << "Nhap chuoi trung to:";
    cin >> s;
    infixToPostfix(s);
}