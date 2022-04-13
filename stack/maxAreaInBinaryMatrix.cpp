// ********************************* Maximum area in binary matrix *********************

#include <bits/stdc++.h>
#define m 4
#define n 4
using namespace std;
vector<int> minLeft(int v[], int size) // for min element index left
{
    vector<int> left;
    stack<pair<int, int>> s;
    s.push({-1, -1});
    for (int i = 0; i < size; i++)
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

vector<int> minRight(int v[], int size) // for min element index right
{
    vector<int> right;
    stack<pair<int, int>> s;
    s.push({-1, -1});
    for (int i = size; i >= 0; i--)
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
int areaHistogram(int v[], int size)
{
    vector<int> right;
    vector<int> left;
    right = minRight(v, size);
    left = minLeft(v, size);
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
    return area;
}
int areaOfRectangleForBinary(int arr[m][n])
{
    int area = areaHistogram(arr[0], m);
    int prev[n];
    for (int i = 0; i < n; i++)
        prev[i] = arr[0][i];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0) // if 0 i.e. rectangle not made
            {
                prev[j] = 0;
            }
            prev[j] = prev[j] + arr[i][j]; // add pevious value
        }
        int newArea = areaHistogram(prev, m);
        area = max(area, newArea);
    }
    return area;
}
int main()
{
    int arr[m][n] = {{0, 1, 1, 1},
                     {1, 1, 1, 1},
                     {1, 1, 1, 1},
                     {0, 1, 0, 1}};
    cout << areaOfRectangleForBinary(arr);
    return 0;
}
