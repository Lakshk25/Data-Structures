/*
***********************minimum cost to make string valid*****************************
{{{}}} --> valid
{{{ , {{{{ --> invalid
{{{{ --> change to {}{} --> total operation need  = 2
*/

#include <iostream>
#include <stack>
using namespace std;
int totalOperation(string str)
{
    if (str.length() % 2 == 1) // invalid string
        return -1;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{')
            s.push(str[i]);
        else if (str[i] == '}')
        {
            if (s.top() == '{')
                s.pop();
            else
                s.push(str[i]);
        }
    }
    // a for total { and b for total }
    int a = 0, b = 0, result;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            a++;
            s.pop();
        }
        else
        {
            b++;
            s.pop();
        }
    }
    result = (a + 1) / 2 + (b + 1) / 2;
    return result;
}
int main()
{
    string str = "{}}{}}";
    cout << "total operation needed --> " << totalOperation(str);
    return 0;
}
