// ********************************* largest rectangular area in a histogram *********************

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> minLeft(vector<int> v) // for min element index left
{
    vector<int> left;
    stack<pair<int, int>> s;
    s.push({-1, -1});
    for (int i = 0; i < v.size(); i++)
    {
        if (s.top().first < v[i])
        {
            left.push_back(s.top().second);
            s.push({v[i], i});
        }
        else if (s.top().first >= v[i])
        {
            while (s.top().first >= v[i])
                s.pop();

            left.push_back(s.top().second);
            s.push({v[i], i});
        }
    }
    return left;
}

vector<int> minRight(vector<int> v) // for min element index right
{
    vector<int> right;
    stack<pair<int, int>> s;
    s.push({-1, -1});
    for (int i = v.size(); i >= 0; i--)
    {
        if (s.top().first < v[i])
        {
            right.push_back(s.top().second);
            s.push({v[i], i});
        }
        else if (s.top().first >= v[i])
        {
            while (s.top().first >= v[i])
                s.pop();

            right.push_back(s.top().second);
            s.push({v[i], i});
        }
    }
    reverse(right.begin(), right.end());
    return right;
}
int areaHistogram(vector<int> v)
{
    int size = v.size();
    vector<int> right;
    vector<int> left;
    right = minRight(v);
    left = minLeft(v);
    int area = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (right[i] == -1) // if all rectangle have equal height
        {
            right[i] = size;
        }
        int length = v[i];
        int breadth = right[i] - left[i] - 1;
        int newArea = length * breadth;
        area = max(area, newArea);
    }
    cout << "largest area of rectangle = " << area;
}
int main()
{
    vector<int> v = {6, 2, 5, 4, 5, 1, 6}; // length of rectangles with breadth 1
    areaHistogram(v);
    return 0;
}
