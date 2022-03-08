/*
60. Write a program in C to find the row with maximum number of 1s. Go to the editor
Expected Output :
The given 2D array is :
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The index of row with maximum 1s is: 1
*/

#include <stdio.h>
#define R 5
#define C 5
int findOne(int arr[R][C])
{
    int count;
    int total = 0;
    int row = 0;
    for (int i = 0; i < R; i++)
    {
        count = 0;
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (total < count)
        {
            total = count;
            row = i; // add index of row in row variable
        }
    }
    printf("The index of row with maximum 1s is: %d", row);
}

int main()
{
    int arr[R][C] = {{0, 1, 0, 1, 1},
                     {1, 0, 1, 1, 1},
                     {1, 0, 1, 0, 1},
                     {0, 0, 0, 0, 0},
                     {1, 0, 0, 0, 1}};
    findOne(arr);
    return 0;
}
