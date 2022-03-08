/*
22. Write a program in C to find transpose of a given matrix. Go to the editor
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
The transpose of a matrix is :
1 3
2 4
*/

#include <stdio.h>

int main()
{
    int matrix[50][50], transpose[50][50];
    int row, column;
    printf("Enter the number of rows and columns for first  matrix \n");
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

    // Transpose of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("\n");
    printf("\nTranspose of matrix is -\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
    }

    return 0;
}
