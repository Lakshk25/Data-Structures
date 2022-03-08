#include <stdio.h>
int findElement(int arr[4][4], int element)
{
    int i = 0, j = 3;
    int smallest = arr[0][0], largest = arr[4][4];
    if ((element < smallest) || (element > largest))
    {
        return -1;
    }

    while ((i < 4) && (j >= 0))
    {
        if (arr[i][j] == element)
        {
            printf("element found at row = %d , column = %d", i + 1, j + 1);
            return 1;
        }
        else if (arr[i][j] > element)
            j--;
        else
            i++;
    }
    printf("element not found");
}
int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 46},
                     {32, 33, 39, 50}};
    int element = 45;
    findElement(arr, element);
    return 0;
}
