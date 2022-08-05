#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count2 = 1;
    for (int row = 0; row < n; row++)
    {
        // for printing 1st  triangle
        int count1 = 1;
        for (int col = 0; col < n - row; col++)
        {
            cout << count1++ << " ";
        }

        // for print (*)  {middle part} triangle
        for (size_t k = 0; k < count2 - 1; k++)
        {
            cout << "* ";
        }
        count2 += 2;

        // for print 3 triangle
        int space = row;
        int count3 = n - row;
        for (int j = 0; j < n; j++)
        {
            if (space > 0)
            {
                space--;
            }
            else
            {
                cout << count3-- << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
