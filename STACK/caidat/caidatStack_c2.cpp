#include <iostream>
#define maxsize 10
using namespace std;

class stack
{
public:
    int top = -1;
    int Stack[10];
    void push(int);
    void pop();
    void print();
};

void stack::push(int x)
{
    if (top == maxsize)
    {
        cout << "ngan xep da day khong the them!" << endl;
    }
    else
    {
        top++;
        Stack[top] = x;
    }
}

void stack::pop()
{
    if (top < 0)
    {
        cout << "Ngan xep dang rong khong the xoa!" << endl;
    }
    else
    {
        top--;
        return;
    }
}

void stack::print()
{
    if (top < 0)
    {
        cout << "Ngan xep dang rong!" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << Stack[i] << "\t";
        }
    }
}

int main()
{
    stack s;
    int n, k;
    cout << "Nhap so luong ngan xep:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap gia tri thu " << i << ":";
        cin >> k;
        s.push(k);
    }
    s.print();
    cout << "\nXoa gia tri dau!" << endl;
    s.pop();
    s.print();
}