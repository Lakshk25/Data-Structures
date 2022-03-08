/*
50. Write a program in C to print a matrix in spiral form. Go to the editor
Expected Output :
The given array in matrix form is :
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
The spiral form of above matrix is:
1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12
*/

#include <stdio.h>
#define r 4
#define c 5
void spiralMatrix(int arr[r][c], int m, int n)
{
    int i = 0, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            printf("%d ", arr[k][i]);
        }
        k++;
        for (i = k; i < m; i++)
        {
            printf("%d ", arr[i][n - 1]);
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                printf("%d ", arr[m - 1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }
}
int main()
{
    int arr[r][c] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20}};

    // Function Call
    spiralMatrix(arr, r, c);
    return 0;
}
