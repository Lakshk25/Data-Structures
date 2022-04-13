// *************************** valid parentheses ********************************

#include <iostream>
#include <stack>
using namespace std;
// check match char
bool match(char inStack, char strChar)
{
    if (inStack == '(' && strChar == ')')
        return 1;
    if (inStack == '[' && strChar == ']')
        return 1;
    if (inStack == '{' && strChar == '}')
        return 1;
    return 0;
}
bool checkParanthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        // if opening para push
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);

        // if closing para pop
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (s.empty()) // if already empty false
                return false;

            else if (match(s.top(), str[i]))
                s.pop();
        }
    }
    // if empty valid
    if (s.empty())
        return true;
    return false;
}
int main()
{
    string str = "()";
    cout << checkParanthesis(str);
    return 0;
}
