#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void minLeft(vector<int> v)
{
    vector<int> left;
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < v.size(); i++)
    {
        if (s.top() < v[i])
        {
            left.push_back(s.top());
            s.push(v[i]);
        }
        if (s.top() >= v[i])
        {
            while (s.top() >= v[i])
                s.pop();

            left.push_back(s.top());
            s.push(v[i]);
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << left[i] << " ";
}

void minRight(vector<int> v)
{
    vector<int> right;
    stack<int> s;
    s.push(-1);
    for (int i = v.size(); i >= 0; i--)
    {
        if (s.top() < v[i])
        {
            right.push_back(s.top());
            s.push(v[i]);
        }
        else if (s.top() >= v[i])
        {
            while (s.top() >= v[i])
                s.pop();

            right.push_back(s.top());
            s.push(v[i]);
        }
    }
    reverse(right.begin(), right.end());
    for (int i = 0; i < v.size(); i++)
        cout << right[i] << " ";
}
int main()
{
    vector<int> v = {2, 4, 3, 1, 4, 5};

    minLeft(v);
    cout << endl;
    minRight(v);
    return 0;
}
