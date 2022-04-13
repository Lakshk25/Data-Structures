// ********************************* Insert at bottom *********************************

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
void insertAtBottom(stack<int> &s, int elem)
{
    if (s.empty())
    {
        s.push(elem);
        return;
    }
    int num = s.top();
    s.pop();

    insertAtBottom(s, elem);
    s.push(num);
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2); 
    s.push(1);
    int elem = 9;
    cout << "Before Insertion" << endl;
    traverse(s);
    cout << "After Insertion" << endl;
    insertAtBottom(s, elem);
    traverse(s);
    return 0;
}
