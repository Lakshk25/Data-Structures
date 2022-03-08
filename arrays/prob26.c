/*
26. Write a program in C to print or display the lower triangular of a given matrix. Go to the editor
Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in lower triangular matrix

1 2 3
0 5 6
0 0 9
*/

#include <stdio.h>

int main()
{
    int matrix[50][50];
    int row, column;
    printf("Enter the number of rows for square matrix \n");
    scanf("%d", &row);
    column = row;
    printf("Add numbers in  matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Number for [%d] , [%d] : \t", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
    }
    printf("\n");
    // code for triangle pattern
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[j + 1 + count][i] = 0;
        }
        count++;
    }
    printf("\nThe lower triangle is :\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
    }
    return 0;
}
