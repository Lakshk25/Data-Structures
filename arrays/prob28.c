/*
28. Write a program in C to calculate determinant of a 3 x 3 matrix. Go to the editor
Test Data :
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : -1
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 1
element - [2],[0] : -1
element - [2],[1] : -1
element - [2],[2] : 0
Expected Output :
The matrix is :
1 0 -1
0 0 1
-1 -1 0

The Determinant of the matrix is: 1
*/

#include <stdio.h>

int main()
{
    int matrix[50][50];
    int row = 3, column;

    column = row;
    printf("Add numbers in matrix 3 X 3 matrix\n");
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
    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
    printf("determinant is %d\n", determinant);
    return 0;
}
