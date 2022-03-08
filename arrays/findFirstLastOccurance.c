#include <stdio.h>
int firstOccurance(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            first = mid;
            high = mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}
int lastOccurance(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {

            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < element) //only else if is used not if
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 6, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 6;
    printf("First Occurrence = %d\t", firstOccurance(arr, size, element));
    printf("\nLast Occurrence = %d\n", lastOccurance(arr, size, element));

    return 0;
}
