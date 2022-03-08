/*
23. Write a program in C to find sum of right diagonals of a matrix.Go to the editor
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the right Diagonal elements is :5
*/

#include <stdio.h>

int main()
{
    int matrix[50][50];
    int row, column, sum = 0;
    printf("Enter the number of rows  for square matrix \n");
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
    // code for addition
    for (int i = 0; i < row; i++)
    {
        sum += matrix[i][i];
    }
    printf("\n");
    printf("The sum of right diagonal matrix is : %d\n", sum);

    return 0;
}
