// ********************************* Reverse a stack *********************************

#include <iostream>
#include <stack>
using namespace std;
void traverse(stack<int> s)
{
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void insertAtBottom(stack<int> &stack, int elem)
{
    if (stack.empty())
    {
        stack.push(elem);
        return;
    }
    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, elem);
    stack.push(num);
}
void reverse(stack<int> &stack)
{
    if (stack.empty())
        return;
    int num = stack.top();
    stack.pop();
    reverse(stack);
    insertAtBottom(stack, num);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    int elem = 9;
    cout << "Before Reverse" << endl;
    traverse(s);
    cout << "After Reverse" << endl;
    reverse(s);
    traverse(s);
    return 0;
}
