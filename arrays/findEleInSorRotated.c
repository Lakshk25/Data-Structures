// find element in sorted rotated array 😃😃😃

#include <stdio.h>
int findPivot(int[], int size);
int binarySearch(int arr[], int low, int high, int element);

int pivotedBinarySearch(int arr[], int size, int element) // base function
{
    int pivot = findPivot(arr, size);
    if (pivot == -1)
    {
        return binarySearch(arr, 0, size - 1, element);
    }
    if (pivot == element)
    {
        return pivot;
    }
    if (arr[0] <= element)
    {
        return binarySearch(arr, 0, size - 1, element);
    }
    return binarySearch(arr, pivot + 1, size - 1, element);
}

int findPivot(int arr[], int size) // find pivot
{
    int low = 0;
    int high = size - 1;
    if (low > high)
    {
        return -1;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        if (arr[low] >= arr[high])
        {
            high = mid - 1;
        }
        low = mid + 1;
    }
}
int binarySearch(int arr[], int low, int high, int element) // check for element
{

    if (high < low)
        return -1;
    int mid = (low + high) / 2;

    if (arr[mid] == element)
    {
        return mid;
    }
    if (arr[mid] < element)
    {
        return binarySearch(arr, mid + 1, high, element);
    }

    return binarySearch(arr, low, mid - 1, element);
}
int main()
{
    int arr[] = {11, 12, 15, 18, 2, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 18;
    int index = pivotedBinarySearch(arr, size, element);
    printf("%d found at index %d\n", element, index);
    return 0;
}
