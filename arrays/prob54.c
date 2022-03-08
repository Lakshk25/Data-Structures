/*
54. Write a program in C to sort an array of 0s, 1s and 2s. Go to the editor
Expected Output :
The given array is : 0 1 2 2 1 0 0 2 0 1 1 0
After sorting the elements in the array are:
0 0 0 0 0 1 1 1 1 2 2 2
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
void sorting(int arr[] , int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++) // for sorting in ascending 🤔
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {0 , 1 , 2 , 2 , 1 , 0 , 0 , 2 , 0 , 1 , 1 , 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    sorting(arr ,size);
    printf("After sorting the elements in the array are:\n");
    printarray(arr ,size);
    return 0;
}
