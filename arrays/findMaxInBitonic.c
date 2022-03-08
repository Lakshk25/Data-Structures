// bitonic --> which increases first and after peak it decreases same ase peak

#include <stdio.h>
int findMaxBitonic(int arr[], int size)
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
    printf("array is : ");
    printarray(arr, size);
    int max = findMaxBitonic(arr, size);
    if (max == -1)
        printf("no maximum element found in bitonic array\n");
    else
        printf("maximum element is %d and index is %d in bitonic array", arr[max], max);
    return 0;
}
