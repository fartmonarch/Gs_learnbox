#include <iostream>

using namespace std;

class ArrayStack
{
private:
    int* _items;       // 数组
    int _capacity;     // 栈的容量
    int _top;          // 栈顶索引

public:
    ArrayStack(int capacity = 10) : _capacity(capacity), _top(-1)
    {
        _items = new int[_capacity];
    }

    ~ArrayStack()
    {
        delete[] _items;
    }

    bool isEmpty() const
    {
        return _top == -1;
    }

    void push(int item)
    {
        if (_top == _capacity - 1)
        {
            cout << "栈满了" << endl;
            return;
        }
        _items[++_top] = item;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "栈空了" << endl;
            return -1; // 返回一个标志值
        }
        return _items[_top--];
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "栈空了" << endl;
            return -1; // 返回一个标志值
        }
        return _items[_top];
    }

    int size() const
    {
        return _top + 1;
    }
};

int main()
{
    ArrayStack stack;

    stack.push(1);
    stack.push(2);
    cout << stack.pop() << endl;  // 输出 2
    cout << stack.peek() << endl; // 输出 1
    cout << "是否空了,空了输出true,否则输出false" << endl;
    cout << boolalpha << stack.isEmpty() << endl; 
    system("pause");

    return 0;
}
