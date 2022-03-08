/*
31. Write a program in C to check whether a given matrix is an identity matrix. Go to the editor
Test Data :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix.
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
    // check every element
    int check = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
            {
                check = 0;
                break;
            }
        }
    }
    if (check == 1)
    {
        printf("the matrix is identity matrix\n");
    }
    else
    {
        printf("the matrix is not identity matrix\n");
    }

    return 0;
}
