#include <iostream>
#include <stack>
using namespace std;

void printNextGreatElement(int arr[], int n)
{
    stack<int> stack;
    stack.push(arr[0]); // cho phần tử đầu ngăn xếp là arr[0]
    for (int i = 1; i < n; i++)
    {
        if (stack.empty() == true) // Nếu stack rỗng
        {
            stack.push(arr[i]); // thì thêm arr[i] vào ngăn xếp
            // continue;           // bỏ qua câu lệnh dưới và tiếp tục
        }
        while (stack.empty() == false && stack.top() < arr[i]) // Nếu stack không rỗng và
        // phần tử top bé hơn arr[i] hiện tại
        {
            cout << arr[i] << "\t";
            stack.pop();
        }
        stack.push(arr[i]);
    }
    while (stack.empty() == false)
    {
        cout << "-1"
             << "\t";
        stack.pop();
    }
}

int main()
{
    int n, arr[n];
    cout << "nhap n:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printNextGreatElement(arr, n);
}