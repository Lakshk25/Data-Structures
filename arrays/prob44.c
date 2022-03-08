/*
44. Write a program in C to find the two repeating elements in a given array. Go to the editor
Expected Output :
The given array is : 2 7 4 7 8 3 4
The repeating elements are: 7 4
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
void findRepeating(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf(" %d ", arr[i]);
            }
        }
    }
}
int main()
{
    int arr[] = {2, 7, 4, 7, 8, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is :\n");
    printarray(arr, size);
    printf("The repeating elements are :");
    findRepeating(arr, size);
    return 0;
}
