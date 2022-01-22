#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

void show(int n)
{
    queue<string> q;
    q.push("6");
    q.push("8");
    while (n--)
    {
        string s1 = q.front();
        string tmp = s1;
        q.pop();
        cout << s1 << " ";
        string s2 = q.front();
        string tmp2 = s2;
        q.pop();
        cout << s2 << " ";
        q.push(s1.append("6"));
        q.push(tmp.append("8"));
        cout << tmp << " ";
        q.push(s2.append("6"));
        q.push(s2.append("8"));
        cout << tmp2 << " ";
    }
}

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    show(n);
}