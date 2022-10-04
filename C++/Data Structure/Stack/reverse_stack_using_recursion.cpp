// using recursion
#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &stack,int element)
{
    if(stack.empty())
    {
        stack.push(element);
        return ;
    }
    int num = stack.top();
    stack.pop();
    insertAtBottom(stack,element);
    stack.push(num);
    
}
void reverseStack(stack<int> &stack) {
    if(stack.empty())
    {
        return ;
    }
    else
    {
        int num = stack.top();
        stack.pop();
        reverseStack(stack);
        insertAtBottom(stack,num);
    }
}
void PrintStack(stack<int> s)
{
    // If stack is empty then return
    if (s.empty())
        return;
     
 
    int x = s.top();
 
    // Pop the top element of the stack
    s.pop();
 
    // Recursively call the function PrintStack
    PrintStack(s);
 
    // Print the stack element starting
    // from the bottom
    cout << x << " ";
 
    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "Before " << endl;
    PrintStack(s);
    reverseStack(s);
    cout << endl << "After " << endl;
    PrintStack(s);
    return 0;
}
