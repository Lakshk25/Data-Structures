/*
29. Write a program in C to accept a matrix and determine whether it is a sparse matrix. Go to the editor
Test Data :
Input the number of rows of the matrix : 2
Input the number of columns of the matrix : 2
Input elements in the first matrix :
element - [0],[0] : 0
element - [0],[1] : 0
element - [1],[0] : 1
element - [1],[1] : 0
Expected Output :
The given matrix is sparse matrix.
There are 3 number of zeros in the matrix
*/
// sparse matrix -> if matrix have majority 0s
#include <stdio.h>

int main()
{
    int matrix[50][50];
    int row, column;
    printf("Enter the number of rows and columns for matrix \n");
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
    printf("\n");
    // check for number of zeroes
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > (row * column) / 2)
    {
        printf("The given matrix is sparse matrix.\n");
        printf("There are %d number of zeros in the matrix\n", count);
    }
    else
    {
        printf("The given matrix is not a sparse matrix.\n");
    }

    return 0;
}
