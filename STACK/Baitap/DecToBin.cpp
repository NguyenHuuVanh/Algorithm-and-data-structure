#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so thap phan n:";
    cin >> n;
    stack<int> stack;
    while (n != 0)
    {
        stack.push(n % 2);
        n /= 2;
    }
    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
}