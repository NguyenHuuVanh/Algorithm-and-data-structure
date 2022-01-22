#include <iostream>
using namespace std;
#include <queue>
void show(queue<int> Queue)
{
    // queue<int> Q = Queue;
    while (!Queue.empty())
    {
        cout << Queue.front() << "\t";
        Queue.pop();
    }
}

int main()
{
    queue<int> q;
    int n, x;
    cout << "Nhap so luong phan tu:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri can them:";
        cin >> x;
        q.push(x);
    }
    cout << "Danh sach hang doi hien tai:";
    show(q);
    q.pop();
    cout << "\nXoa phan tu dau" << endl;
    cout << "Danh sach hang doi hien tai:";
    show(q);
    cout << "\nXoa phan tu cuoi" << endl;
    cout << "Tra ve gia tri cuoi :" << q.back() << endl;
    cout << "Danh sach hang doi hien tai:";
    show(q);
}