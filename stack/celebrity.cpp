// ********************* find the Celebrity *************************************

// BruteForce approch
/*
#include <iostream>
#define n 3
using namespace std;
int findCelebrity(int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i][j] == 0)
                count++;
        }
        if (count == n)
            return i;
    }
    return -1;
}
int main()
{
    int arr[n][n] = {{0, 1, 0},
                     {0, 0, 0},
                     {0, 1, 1}};
    cout<<findCelebrity(arr);
    return 0;
}
*/

// optimised approach

#include <iostream>
#include <stack>
using namespace std;
#define n 4
bool checkCeleb(int a, int b, int arr[n][n])
{
    if (arr[a][b] == 1)
        return true;
    else
        false;
}
int findCelebrity(int arr[n][n])
{
    stack<int> s;
    for (int i = 0; i < n; i++) // push all peoples to check
    {
        s.push(i);
    }
    while (s.size() > 1) // only partial celeb is left in stack
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (checkCeleb(a, b, arr))
            s.push(b);
        else
            s.push(a);
    }
    int celeb = s.top();
    // check if celeb not known anyone
    for (int i = 0; i < n; i++)
    {
        if (arr[celeb][i] != 0) // if he knows someone he is not celeb
            return -1;
    }

    // check if celeb is known by everyone except itself
    for (int i = 0; i < n; i++)
    {
        if (arr[i][celeb] != 1 && i != celeb) // if anyone not known him , he is not celeb
            return -1;
    }
    return celeb;
}
int main()
{
    // 0 -> not knows , 1 -> knows
    int arr[n][n] = {{0, 1, 0},
                     {0, 0, 0},
                     {0, 1, 0},
                     {1, 1, 0}};
    cout<<"Celeb is --> " << findCelebrity(arr);
    return 0;
}
