/*
63. Write a program in C to replace every element with the greatest element on its right side. Go to the editor
Expected Output :
The given array is : 7 5 8 9 6 8 5 7 4 6
After replace the modified array is: 9 9 9 8 8 7 7 6 6 0
*/

#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void maxRight(int arr[], int size)
{
    int max = 0, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > max)
                max = arr[j];
            arr[i] = max;
        }
        max = 0;
    }
    arr[size - 1] = 0; // last number is next is not in array so allocate 0
}
int main()
{
    int arr[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, size);
    maxRight(arr, size);
    printarray(arr, size);
    return 0;
}
