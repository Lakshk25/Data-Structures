#include <iostream>
using namespace std;
// j < 2 * n - 1
int main()
{
    int n = 5;
    int count = 1;
    for (size_t i = 0; i < n; i++)
    {
        // for space
        int num = 1;
        int space = n - i - 1;
        for (size_t j = 0; j < space; j++)
        {

            cout << " ";
        }
        // for stars
        for (size_t k = 0; k < count; k++)
        {
            cout << num++;
        }
        count += 2;
        cout << endl;
    }

    return 0;
}
