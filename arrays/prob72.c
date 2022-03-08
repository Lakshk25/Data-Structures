/*
72. Write a program in C to return only the unique rows from a given binary matrix. Go to the editor
Expected Output:
The given array is :
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The unique rows of the given array are :
0 1 0 0 1
1 0 1 1 0
1 0 1 0 0
*/
#include <stdio.h>
#define r 4
#define c 5
int main()
{
    int arr[r][c] = {{0, 1, 0, 0, 1},
                     {1, 0, 1, 1, 0},
                     {0, 1, 0, 0, 1},
                     {1, 0, 1, 0, 0}};
    int unique[c];

    printf("The given array is :\n");
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
            printf("%d ", arr[a][b]);
        printf("\n");
    }

    for (int i = 0; i < c; i++) // assign total rows in array
        unique[i] = i + 1;

    for (int i = 0; i < r; i++) // code for printing unique rows
        for (int j = 0; j < c; j++)
        {
            int count = 0;
            for (int k = 0; k < c; k++)
                if (arr[i][k] == arr[i + j + 1][k])
                    count++;
            if (count == c)
                for (int l = 0; l < c; l++)
                    unique[i] = 0; // change duplicate array to 0
        }

    printf("The unique rows of the given array are : \n");
    for (int a = 0; a < r; a++)
    {
        if (unique[a] == 0)
            continue; // if 0 continue (duplicate)
        for (int b = 0; b < c; b++)
            printf("%d ", arr[a][b]);
        printf("\n");
    }
    return 0;
}