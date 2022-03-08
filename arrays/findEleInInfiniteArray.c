/*
find element in infinite sorted array 
infinite array --> which has no high value ( we need to make it )😎😎
*/

#include <stdio.h>

int binarySearch(int arr[], int element, int low, int high);
int findElement(int arr[], int element)
{
    int low = 0;
    int high = 1;
    while (element > arr[high])
    {
        high = high * 2;
    }
    return binarySearch(arr, element, 0, high);
}
int binarySearch(int arr[], int element, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;

        if (arr[mid] < element)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int element = 13;
    int index = findElement(arr, element);
    printf("%d found at index %d", element, index);
    return 0;
}
