#include <iostream>
using namespace std;

int top = -1;

bool isFull(int capacity) // Kiểm tra ngăn xếp có đầy hay chưa
{
    if (top >= capacity - 1) // Nếu ngăn xếp đầy thì trả về là true
    {
        return true;
    }
    else
    {
        return false; // Nếu không trả về false
    }
}

bool isEmpty() // hàm kiểm tra ngăn xếp có rỗng hay không
{
    if (top == -1) // Nếu rỗng thì trả về true
    {
        return true;
    }
    else
    {
        return false; // Nếu không trả về false
    }
}

void push(int stack[], int value, int capacity) // Hàm thêm giá trị vào đầu của ngăn xếp
{
    if (isFull(capacity))
    {
        cout << "Ngan xep da day khong the them vao!" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop() // hàm xoá phần tử đầu của ngăn xếp
{
    if (isEmpty())
    {
        cout << "Ngan xep rong khong co gi de xoa!" << endl;
    }
    else
    {
        top--; //Đơn giản chi cần giảm top xuống 1 đơn vị
    }
}

int Top(int stack[]) // Hàm lấy giá trị của phần tử đầu tiên trong ngăn xếp
{
    return stack[top];
}

int size() // Hàm lấy kích thước của ngăn xếp
{
    return top + 1;
}

int main()
{
    int capacity, top = -1, stack[capacity];
    cout << "Nhap so luong cua ngan xep:";
    cin >> capacity; // ví dụ ngăn xếp có kích thước = 3
    // Thêm phần tử có giá trị 5 vào ngăn xếp
    cout << "Them phan tu co gia tri 5 vao ngan xep!" << endl;
    push(stack, 5, capacity);
    cout << "Kich thuoc hien tai cua ngan xep la " << size() << endl;
    cout << "Them phan tu co gia tri 10 va 24 vao ngan xep!" << endl;
    push(stack, 10, capacity);
    push(stack, 24, capacity);
    cout << "Kich thuoc hien tai cua ngan xep la " << size() << endl;
    cout << "Them phan tu co gia tri 12 vao ngan xep khi ngan xep da day!" << endl;
    push(stack, 12, capacity); // Khi đó sẽ hiện thị thông báo ngăn xếp đã đầy
    cout << "Lay gia tri dau cua ngan xep!" << endl;
    cout << "gia tri dau cua ngan xep la " << Top(stack) << endl;
    cout << "Xoa tat ca gia tri trong ngan xep!" << endl;
    for (int i = 1; i <= capacity; i++)
    {
        pop();
        cout << "Kich thuoc hien tai cua ngan xep la " << size() << endl;
    }
    if (isEmpty())
    {
        cout << "Ngan xep da bi xoa het!" << endl;
    }
}