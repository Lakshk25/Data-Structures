#include <iostream>
#include <stack>
using namespace std;

class st
{
    int minElem = 0;
    stack<int> s;

public:
    int push(int elem)
    {
        cout<<"Inserted -> "<<elem<<endl;
        if (s.empty())
        {
            minElem = elem;
            s.push(elem);
        }
        if (elem < minElem)
        {
            s.push(elem - minElem);
            minElem = elem;
        }
        else
            s.push(elem);
    }
    void pop(){
        if(s.top() > minElem){
            cout<<"Popped -> "<<s.top()<<endl;
            s.pop();
        }
        else if(s.top() < minElem){
            cout<<"popped -> "<<minElem<<endl;
            minElem = minElem - s.top();
            s.pop();
        }
    }
    void getMin()
    {
        cout<<"minimum element -> "<<minElem<<endl;
    }
};
int main()
{
    st s1;
    s1.push(4);
    s1.push(1);
    s1.pop();
    s1.push(2);
    s1.push(8);
    s1.pop();
    s1.push(1);
    s1.getMin();
    return 0;
}
