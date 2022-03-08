/* find floor and ceil of sorted array
floor --> greatest number smaller than element 😊
ceil --> smallest number greater than element  🙁 
minimum difference --> check number diff with its ceil and floor
*/

#include <stdio.h>

int findFloor(int arr[], int size, int element);
int findCeil(int arr[], int size, int element);
int findMinDiff(int arr[], int size, int element)
{
    int ceil = findCeil(arr, size, element);
    int floor = findFloor(arr, size, element);
    int diff;
    if ((ceil - element) < (element - floor))
    {
        diff = ceil - element;
        return diff;
    }
    else
    {
        diff = element - floor;
        return diff;
    }
}
int findFloor(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int floor;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            floor = arr[mid];
            return arr[mid];
        }
        else if (arr[mid] < element)
        {
            floor = arr[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return floor;
}
int findCeil(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int ceil;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            ceil = arr[mid];
            return arr[mid];
        }
        else if (arr[mid] > element)
        {
            ceil = arr[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ceil;
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
    int arr[] = {2, 3, 4, 13, 15, 17, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 5;
    printf("array is : ");
    printarray(arr, size);
    int minDiff = findMinDiff(arr, size, element);
    printf("minimum difference of %d is %d\n", element, minDiff);
    return 0;
}
