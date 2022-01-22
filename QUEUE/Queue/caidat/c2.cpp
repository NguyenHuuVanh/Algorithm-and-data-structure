#include <iostream>
using namespace std;

class queue
{
public:
    int queue[100], n = 100;
    int front = -1;
    int rear = -1;
    void Enqueue();
    void Dequeue();
    int size();
    bool IsEmpty();
    int Front();
    void Printqueue();
};

void queue::Enqueue() // Hàm thêm vào cuối
{
    int value;
    if (rear == n - 1)
    {
        cout << "Hang doi day!" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            int k;
            cout << "Nhap so luong hang doi:";
            cin >> k;
            for (int i = 0; i < k; i++)
            {
                cout << "Nhap gia tri can them:";
                cin >> value;
                rear++;
                queue[rear] = value;
            }
        }
    }
}

void queue::Dequeue() // Hàm xoá cuối
{
    if (front == -1 || front > rear)
    {
        cout << "Hang cho rong!" << endl;
        return;
    }
    else
    {
        queue[front] = 0;
        front++;
    }
}

int queue::Front()
{
    return queue[front];
}

int queue::size()
{
    if (IsEmpty())
    {
        return 0;
    }
    else
    {
        front = -1;
    }
    return rear - front;
}

bool queue::IsEmpty()
{
    if (rear == front)
    {
        return true;
    }
    return false;
}

void queue::Printqueue()
{
    if (IsEmpty())
    {
        cout << "Hang doi rong!" << endl;
        return;
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout << queue[i] << "\t";
        }
    }
}

int main()
{
    queue q;
    cout << "--------- Them vao cuou hang doi ---------- " << endl;
    q.Enqueue();
    cout << "\nKich thuoc cua hang doi la " << q.size() << endl;
    cout << "\n--------- Xoa dau hang doi -------------- " << endl;
    cout << "\nKich thuoc cua hang doi la " << q.size() << endl;
    q.Dequeue();
    cout << "\n---- Sau khi xoa " << endl;
    q.Printqueue();
}
