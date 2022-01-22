#include <iostream>
using namespace std;

struct Node
{
    int data;   // Chứa dữ liệu là các số nguyên
    Node *next; // con trỏ next dùng để liên kết với nhau
};

struct stack
{
    Node *top; // con trỏ top dùng để kiểm soát dữ liệu
};

void CreatNodeStack(stack &s) // Hàm tạo con trỏ Stack
{
    s.top = NULL; // con trỏ top = null
}

bool IsEmpty(stack &s)
{
    if (s.top == NULL) // Nếu con trỏ top = NULL tức là stack đang rỗng
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node *CreatNode(int value)
{
    Node *p = new Node();
    if (p == NULL) // Nếu cấp phát không thành công
    {
        cout << "Enough memory!";
    }
    else
    {
        p->data = value;
        p->next = NULL;
    }
    return p; // trả về con trỏ p
}

void push(stack &s, Node *p) // Hàm thêm phần tử vào đầu Stack
{
    // if (IsEmpty(s) == true)
    // {
    //     s.top = p; // Nếu danh sách đang rỗng thì node p cũng chính là node đầu stack
    //     cout << "Error:Stack is Empty!";
    //     exit(1);
    // }
    // else
    {
        p->next = s.top; // con trỏ p next = con trỏ top
        s.top = p;       // con trỏ top chính là p luôn hay cấP nhật lại thằng top bằng p
    }
}

void pop(stack &s, int &value) // Hàm lấy giá trị đầu của stack và huỷ nó đi
{
    if (IsEmpty(s))
    {
        cout << "Stack is empty!";
        exit(1);
    }
    else
    {
        Node *p = s.top; // Node p là node thế mạng để xoá
        value = p->data; // gán value bằng p trỏ đến data
        s.top = p->next; // con trỏ top bằng con trỏ p trỏ đến next;
        delete p;        // xoá con trỏ p thế mạng
    }
}

void top(stack &s, int value) // hàm lấy giá trị đầu của stack mà không huỷ nó đi
{
    if (IsEmpty(s))
    {
        cout << "Error : Stack is Empty!";
        exit(1);
    }
    else
    {
        value = s.top->data; // gán value bằng con trỏ top trỏ đến data
        cout << value;
    }
}

void PrintStack(stack s)
{
    if (IsEmpty(s))
    {
        cout << "Can not Print Stack because Stack is Empty!";
        exit(1);
    }
    else
    {
        for (Node *p = s.top; p != NULL; p = p->next)
        {
            cout << p->data << "\t";
        }
    }
}

int menu()
{
    stack s;
    CreatNodeStack(s);
    bool danhap = false;
    int key;
    while (true)
    {
        system("cls");
        cout << "|-------------------------------------------------|" << endl;
        cout << "|                NGAN XEP STACK                   |" << endl;
        cout << "|   1.Nhap gia tri vao stack                      |" << endl;
        cout << "|   2.Kiem tra stack co rong khong                |" << endl;
        cout << "|   3.Lay gia tri dau stack va huy no             |" << endl;
        cout << "|   4.Lay gia tri dau stack ma khong huy no       |" << endl;
        cout << "|   0.Thoat                                       |" << endl;
        cout << "|-------------------------------------------------|" << endl;
        cout << "Nhap lua chon:";
        cin >> key;

        switch (key)
        {
        case 1:
            int n, x;
            cout << "Nhap so luong stack:";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Nhap gia tri can them:";
                cin >> x;
                Node *p = CreatNode(x);
                push(s, p);
            }
            danhap = true;
            cout << "Nhan phim bat ki de tiep tuc!";
            system("pause");
            break;
        case 2:
        {
            if (danhap)
            {
                if (IsEmpty(s))
                {
                    cout << "Stack is Empty!";
                }
                else
                {
                    cout << "Stack isn't Empty!";
                }
            }
            else
            {
                cout << "Please input Stack!" << endl;
            }
            cout << "Nhan phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;
        }
        case 3:
        {
            if (danhap)
            {
                pop(s, x);
                cout << "Current element Stack: ";
                PrintStack(s);
            }
            else
            {
                cout << "Please input Stack!" << endl;
            }
            cout << "Nhan phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;
        }
        case 4:
        {
            if (danhap)
            {

                cout << "Element first of Stack is ";
                top(s, x);
                cout << endl;
            }
            else
            {
                cout << "Please input Stack!" << endl;
            }
            cout << "Nhan phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;
        }
        case 0:
        {
            cout << "\nBan da chon thoat chuong trinh!";
            system("pause");
            return 0;
        }
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nBam phim bat ky de tiep tuc!\n";
            system("pause");
            break;
        }
    }
}

int main()
{
    menu();
}
