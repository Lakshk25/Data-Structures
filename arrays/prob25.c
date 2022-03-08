/*
25. Write a program in C to find sum of rows an columns of a Matrix. Go to the editor
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6 11
7 8 15

12 14
*/

#include <stdio.h>

int main()
{
    int matrix[50][50];
    int row, column;
    printf("Enter the number of rows and columns for  matrix \n");
    scanf("%d %d", &row, &column);

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
    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += matrix[i][j];
        }
        printf("The sum of column %d is = %d\n", i + 1, sum);
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += matrix[j][i];
        }

        printf("The sum of row %d is = %d\n", i + 1, sum);
    }
    return 0;
}
