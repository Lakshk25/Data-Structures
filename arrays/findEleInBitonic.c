// bitonic --> which increases first and after peak it decreases same ase peak

#include <stdio.h>
int findPeak(int arr[], int size);
int ascending(int arr[], int low, int high, int element);
int descending(int arr[], int low, int high, int element);

int findElement(int arr[], int size, int element)
{
    int peak = findPeak(arr, size);
    int first = ascending(arr, 0, peak, element);
    int second = descending(arr, peak, size - 1, element);
    int index;
    if (arr[first] == element)
    {
        index = first;
        return index;
    }
    if (arr[second] == element)
    {
        index = second;
        return index;
    }
    return -1;
}

int findPeak(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((arr[mid] > arr[mid + 1]) && (arr[mid] > arr[mid - 1]))
            return mid;
        else if ((arr[size - 1] > arr[size - 2]) && arr[size - 1] > arr[0])
            return size - 1;
        else if (arr[mid + 1] > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int ascending(int arr[], int low, int high, int element)
{
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

int descending(int arr[], int low, int high, int element)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
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

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 3, 8, 12, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 2;
    printf("array is : ");
    printarray(arr, size);
    int result = findElement(arr, size, element);
    printf("index of %d is %d", element, result);
    return 0;
}
