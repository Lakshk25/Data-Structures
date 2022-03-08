/*
73. Write a program in C to print all unique elements of an unsorted array. Go to the editor
Expected Output:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6
*/

#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            printf("%d ", arr[j]);
    }
}
int main()
{
    int arr[] = {1, 5, 8, 5, 7, 3, 2, 4, 1, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr , size);
    printf("Unique Elements in the given array are:\n");
    findUnique(arr, size);
    return 0;
}
