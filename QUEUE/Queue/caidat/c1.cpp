#include <iostream>
using namespace std;
/*
 Queue[]: Một mảng một chiều mô phỏng cho hàng đợi
arraySize: Số lượng phần tử tối đa có thể lưu trữ trong Queue[]
front: Chỉ số của phần tử ở đang đầu Queue. Nó sẽ là chỉ số của phần tử sẽ bị xóa ở lần tiếp theo
rear: Chỉ số của phần tử tiếp theo sẽ được thêm vào cuối của Queue
*/
int Queue[100], n = 100, front = -1, rear = -1;

void EnQueue() // Hàm thêm phần tử vào cuối hàng đợi
{
    int value, k;
    if (rear == n - 1)
    {
        cout << "Hang doi day!" << endl;
    }
    else
    {
        cout << "Nhap so luong phan tu can them:";
        cin >> k;
        if (front == -1)
        {
            front = 0;
            for (int i = 0; i < k; i++)
            {
                cout << "Nhap gia tri can them:";
                cin >> value;
                rear++;
                Queue[rear] = value;
            }
        }
    }
}

void DeQueue() // Hàm xoá phần tử đầu của hàng đợi
{
    if (front == -1 || front > rear)
    {
        cout << "Hang doi rong!" << endl;
        return;
    }
    else
    {
        Queue[front] = 0;
        front++;
    }
}

bool IsEmpty()
{
    return front == rear;
}

int Front()
{
    return Queue[front];
}

int size()
{
    if (IsEmpty())
    {
        cout << "0" << endl;
    }
    else
    {
        front = -1;
    }
    return rear - front;
}

void PrintQueue()
{
    if (IsEmpty())
    {
        cout << "Hang doi rong!" << endl;
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout << Queue[i] << "\t";
        }
    }
}

int main()
{
    int n;
    cout << "---------- Them phan tu vao hang doi --------------" << endl;
    EnQueue();
    cout << "\nKich thuoc cua hang doi la " << size() << endl;
    cout << "\n---------- Xoa phan tu cuoi hang doi --------------" << endl;
    DeQueue();
    // PrintQueue();
    cout << "\n---------- In cac phan tu hang doi --------------" << endl;
    PrintQueue();
}