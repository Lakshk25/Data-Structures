/*
27. Write a program in C to print or display upper triangular matrix. Go to the editor
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

Setting zero in upper triangular matrix

1 0 0
4 5 0
7 8 9
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
    int count = 1;
    for (int i = row; i > 0; i--)
    {
        for (int j = column; j > 0; j--)
        {
            matrix[j - 1 - count][i-1] = 0;
        }
        count++;
    }
    printf("\nThe upper triangle is :\n");
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