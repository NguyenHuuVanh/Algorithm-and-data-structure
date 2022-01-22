#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> q;
    int n, x;
    cout << "Nhap so luong hang doi:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri:";
        cin >> x;
        q.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << "\t";
        q.pop();
    }
    cout << "\nXoa phan tu dau!" << endl;
    q.pop();
    for (int i = 0; i < n - 1; i++)
    {
        cout << q.front() << "\t";
        q.pop();
    }
}