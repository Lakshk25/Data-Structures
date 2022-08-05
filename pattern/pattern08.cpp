#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j <= i; j++)
        {
            char ch = 'A' + count;
            cout << ch;
            count++;
        }
        cout<<endl;
    }

    return 0;
}
