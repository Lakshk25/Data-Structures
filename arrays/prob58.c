/*
58. Write a program in C to move all zeroes to the end of a given array. Go to the editor
Expected Output :
The given array is : 2 5 7 0 4 0 7 -5 8 0
The new array is:
2 5 7 8 4 -5 7 0 0 0
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
void sorting(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        while (arr[low] != 0)
        {
            low++;
        }
        while (arr[high] == 0)
        {
            high--;
        }
        if (low < high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
}
int main()
{
    int arr[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    /*
    5, 2, 7, 0, 4, 0, 7, -5, 8, 0
    */
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    sorting(arr, size);
    printf("After sorting the elements in the array are:\n");
    printarray(arr, size);
    return 0;
}