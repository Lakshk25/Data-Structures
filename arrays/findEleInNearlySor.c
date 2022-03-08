// find element in nearly sorted array😆
// nearly sorted i.e. elem found in mid-1 , mid , mid +1 index

#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    if (high < low)
    {
        return -1;
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;

        if (arr[mid + 1] == element)
            return mid + 1;

        if (arr[mid - 1] == element)
            return mid - 1;

        if (arr[mid] < element)
            low = mid + 2;
        high = mid - 2;
    }
    return -1;
}
int main()
{
    int arr[] = {5, 10, 30, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 30;
    int j = binarySearch(arr, size, element);
    printf("element found in nearly sorted array at index %d", j);
    return 0;
}
