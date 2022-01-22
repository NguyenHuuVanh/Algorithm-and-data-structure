#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enQueue(int x)
    {
        Node *temp = new Node(x);
        if (rear == NULL) // Nếu queue rỗng
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deQueue()
    {
        if (front == NULL)
        {
            return;
        }
        Node *temp = front;
        front = front->next;
        delete (temp);
    }

    int Front()
    {
        if (rear == NULL)
        {
            cout << "Hang doi rong!" << endl;
            return 0;
        }
        return front->data;
    }
};

int main()
{
    Queue q;
    int n, x;
    cout << "Nhap so luong hang doi:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri:";
        cin >> x;
        q.enQueue(x);
    }
    cout << "Xoa cuoi!" << endl;
    q.deQueue();
    cout << q.rear->data;
}
