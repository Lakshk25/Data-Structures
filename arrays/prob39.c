/*
39. Write a program in C to rotate an array by N positions. Go to the editor
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/

#include <stdio.h>
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int n, int d)
{
    int i;
    for (i = 0; i < d; i++)
    {
        int temp = arr[0], i;
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}
int main()
{
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int position = 4;
    leftRotate(arr, size, position);
    printArray(arr, size);
    return 0;
}
