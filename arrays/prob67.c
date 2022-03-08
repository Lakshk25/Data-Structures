/*
67. Write a program in C to search an element in a row wise and column wise sorted matrix. Go to the editor
Expected Output :
The given array in matrix form is :
15 23 31 39
18 26 36 43
25 28 37 48
30 34 39 50
The given value for searching is: 37
The element Found at the position in the matrix is: 2, 2
*/

#include <stdio.h>
int findNumber(int arr[4][4], int element)
{
    int i = 0, j = 3;
    int smallest = arr[0][0], largest = arr[3][3];
    if (element < smallest || element > largest)
        return -1;
    while (i < 4 && j >= 0)
    {
        if (arr[i][j] == element)
        {
            printf("The element Found at the position in the matrix is: %d, %d", i, j);
            return 1;
        }
        else if (arr[i][j] < element)
            i++;
        else
            j--;
    }
}
int main()
{
    int arr[4][4] = {
        {15, 23, 31, 39},
        {18, 26, 36, 43},
        {25, 28, 37, 48},
        {30, 34, 39, 50},
    };
    int number = 37;
    printf("The given array in matrix form is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("The given value for searching is: %d\n", number);
    findNumber(arr, number);
    return 0;
}
