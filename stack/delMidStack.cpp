// *************************** delete mid stack number **************************

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
void solve(stack<int> &inputStack, int count, int size)
{
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, count + 1, size);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int n)
{
    int count = 0;
    solve(inputStack, count, n);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout << "Before Deletion" << endl;
    traverse(s);
    cout << "After Deletion" << endl;
    deleteMiddle(s, s.size());
    traverse(s);
    return 0;
}
