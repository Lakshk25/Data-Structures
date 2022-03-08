/*
42. Write a program in C to find the smallest missing element from a sorted array. Go to the editor
Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2
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
// recursion
int findMissing(int *arr, int low, int high)
{
    int mid = (low + high) / 2;
    //base condition
    if (low > high)
    {
        return low;
    }
    // recursively call until base condition meets
    if (arr[mid] == mid)
    {
        return findMissing(arr, mid + 1, high);
    }
    else
    {
        return findMissing(arr, low, mid - 1);
    }
}
int main()
{
    int arr[] = {0, 1, 3, 4, 5, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    printarray(arr, size);
    printf("%d", findMissing(arr, low, high));
    return 0;
}
