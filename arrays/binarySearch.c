#include <stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
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
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 6;
    int index = binarySearch(arr, size, element);
    if (index == -1)
    {
        printf("%d not found \n", element);
    }
    else
    {
        printf("binary search %d found at %d", arr[index], index);
    }

    return 0;
}
