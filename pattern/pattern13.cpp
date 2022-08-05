#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int row = 1; row <= n; row++)
    {
        int count1 = 1;
        int space = n - row;
        for (int col = 1; col <= n - 1; col++)
        {
            if (space > 0)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << count1++;
            }
        }
        int count2 = row;
        for (int j = 0; j < row; j++)
        {
            cout << count2--;
        }
        cout << endl;
    }

    return 0;
}
