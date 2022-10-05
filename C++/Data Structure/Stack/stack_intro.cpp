#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data)
    {
        if(size - top > 0)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Can not push element stack full" << endl;
        }
        
    }
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
        
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        if(top >=0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
        
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Before pop " << st.peek() << endl;
    st.pop();
    cout << "After pop " << st.peek() << endl;
    cout << "Is empty " << st.isEmpty() << endl;
    return 0;
}
