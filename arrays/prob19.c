/*
19. Write a program in C for addition of two Matrices of same size. Go to the editor
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
1 2
3 4
The Second matrix is :
5 6
7 8
The Addition of two matrix is :
6 8
10 12
*/

#include <stdio.h>

int main()
{
    int arr1[2][2] = {{2, 3},
                      {2, 3}};
    int arr2[2][2] = {{2, 3},
                      {2, 3}};
    int size = 2, n;
    int sum[50][50];
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    // Stored values into the array
    printf("Input elements in the first matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Input elements in the second matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("first matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("second matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("addition of matrix\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
