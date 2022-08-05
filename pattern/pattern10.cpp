#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            char ch = 'A' + n - 1 - i + j;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
