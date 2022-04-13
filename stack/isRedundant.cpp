/*
**************************** Redundant Brackets *********************************
redundant brackets --> usesless brackets
ex -> ((a+b)) --> useless brackets
    (a + (a+b)) --> useful
*/

#include <iostream>
#include <stack>
using namespace std;
bool findRedundantBrackets(string str)
{
    stack<char> s;
    bool flag;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(')
            s.push(str[i]);

        else if (str[i] == ')')
        {
            flag = true;
            while (s.top() != '(')
            {
                flag = false;
                s.pop();
            }
        if(flag == true)
                return true;
            s.pop();            
        }
    }
    return false;
}
int main()
{
    string str = "((a+b))";
    cout << findRedundantBrackets(str);
    return 0;
}
