/*
30. Write a program in C to accept two matrices and check whether they are equal. Go to the editor
Test Data :
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal.
*/

#include <stdio.h>

int main()
{
    int matrix1[50][50], matrix2[50][50];
    int row, column;
    printf("Enter the number of rows and columns for matrices \n");
    scanf("%d %d", &row, &column);

    printf("Add numbers in first matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Number for [%d] , [%d] : \t", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Add numbers in second matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Number for [%d] , [%d] : \t", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nThe first matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
    }

    printf("\n");
    printf("\nThe second matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
    }
    printf("\n");
    // check each number
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix1[i][j] == matrix2[i][j])
            {
                count++;
            }
        }
    }
    if (count == row * column)
    {
        printf("matrices are equal\n");
    }
    else
    {
        printf("matrices are not equal\n");
    }

    return 0;
}
