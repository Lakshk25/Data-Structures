#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int space = i;
        for (int j = 0; j < n; j++)
        {
            if (space > 0)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
