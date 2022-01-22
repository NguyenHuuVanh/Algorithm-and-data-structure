#include <iostream>
#include <stack>
using namespace std;

// push: thêm phần tử vào đỉnh
// pop: Hàm lấy phần tử tải đỉnh và huỷ nó đi
// top: Lấy phần tử ở đỉnh mà không huỷ nó
// size: Trả về số lượng phần tử trong ngăn xếp
// empty: Xem ngăn xếp có rỗng hay không

int main()
{
    stack<int> stack;
    int n;
    cout << "Nhap so luong ngan xep:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        stack.push(i);
    }
    if (stack.empty() == false)
    {
        cout << "Ngan xep khong rong!" << endl;
    }
    else
    {
        cout << "Ngan xep rong!" << endl;
    }
    stack.pop();
    cout << "Phan tu dau cua ngan xep hien tai la " << stack.top() << endl;
    cout << "Kich thuoc hien tai cua ngan xep la " << stack.size() << endl;
    stack.emplace(6);
    while (!stack.empty())
    {
        cout << stack.top() << "\t";
        stack.pop();
    }
}