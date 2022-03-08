/*
20. Write a program in C for subtraction of two Matrices. Go to the editor
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The First matrix is :
5 6
7 8
The Second matrix is :
1 2
3 4
The Subtraction of two matrix is :
4 4
4 4
*/
#include <stdio.h>

/* formula      (n-1)
                sigma = aik * bkj
                (k=0)
*/
int main()
{
    int a[50][50], b[50][50], c[50][50];
    int sum = 0, row1, row2, column1, column2;
    printf("\nEnter the rows and columns of first matrix\n");
    scanf("%d  %d", &row1, &column1);

    printf("\nEnter the rows and columns of second matrix\n");
    scanf("%d  %d", &row2, &column2);
    if (column1 != row2)
    {
        printf("Multipication is not possible for column of first needs equal to row of second");
    }
    else
    {
        printf("Enter number for first matrix \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter number for second matrix \n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("element - [%d],[%d] : ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        // Multiplication of matrix
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                sum = 0;
                for (int k = 0; k < column1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                    c[i][j] = sum;
                }
            }
        }
        printf("first matrix is - \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("second matrix is - \n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("multiplication of matrix is - \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
