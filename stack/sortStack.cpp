// ********************************* Sort stack ********************************

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
void sort(stack<int> &s , int num){
    if(s.empty() || s.top() < num){
        s.push(num);
        return;
    }
    int top = s.top();
    s.pop();
    sort(s , num);
    s.push(top);
}
void sortStack(stack<int> &s)
{
    if (s.empty()) // base case
        return;

    int num = s.top();
    s.pop();
    sortStack(s); // recursive func
    sort(s , num);     

}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(5); 
    s.push(3);
    s.push(1);
    cout << "Before Sort" << endl;
    traverse(s);
    cout << "After Sort" << endl;
    sortStack(s);
    traverse(s);
    return 0;
}
