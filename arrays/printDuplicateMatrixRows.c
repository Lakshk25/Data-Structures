/*
72. Write a program in C to return only the duplicate rows from a given binary matrix. Go to the editor
Expected Output:
The given array is :
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The duplicate rows of the given array are :
0 1 0 0 1
*/

#include <stdio.h>
#define r 4
#define c 5
int main()
{
    int arr[r][c] = {{0, 1, 0, 0, 1},
                     {1, 0, 1, 1, 0},
                     {0, 1, 0, 0, 1},
                     {1, 0, 0, 1, 1}};

    // code for printing duplicate rows
    printf("Duplicate rows are - \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int count = 0;
            for (int k = 0; k < c; k++)
                if (arr[i][k] == arr[i + j + 1][k])
                    count++;
            if (count == c)
            {
                for (int l = 0; l < c; l++)
                    printf("%d ", arr[i][l]);
                printf("\n");
            }
        }
    }
    return 0;
}
