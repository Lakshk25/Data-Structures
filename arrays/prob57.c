/*
57. Write a program in C to find minimum element in a sorted and rotated array. Go to the editor
Expected Output :
The given array is : 3 4 5 6 7 9 2
The minimum element in the above array is: 2
*/

#include <stdio.h>
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int findSmallest(int arr[], int size)
{
    int low = 0;
    int high = size;
    while (low < high)
    {
        // int mid = low + (high - low) / 2;
        int mid = (low + high) / 2;
        if ((arr[mid] < arr[mid + 1]) && arr[mid - 1] > arr[mid])
            return mid;
        if (arr[mid] < arr[low])
            high = mid;

        low = mid;
    }
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printArray(arr, size);
    int element = findSmallest(arr, size);
    printf("The minimum element in the above array is : %d", arr[element]);
    return 0;
}
