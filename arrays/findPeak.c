// peak element = number which is greater that its previous and forward number

#include <stdio.h>
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
    int arr[] = {1, 2, 6, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("array is : ");
    printarray(arr, size);
    int peak = findPeak(arr, size);
    if (peak == -1)
        printf("no peak element found\n");
    else
        printf("peak element is %d and index is %d", arr[peak], peak);
    return 0;
}
