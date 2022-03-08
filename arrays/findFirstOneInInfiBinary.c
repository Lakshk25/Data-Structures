/*
find first 1 in infinte binary array
*/

#include <stdio.h>

int findFirstOne(int arr[])
{
    int index;
    int low = 0;
    int high = 1;
    while (arr[high] != 1)
    {
        high = high * 2;
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 1)
        {
            index = mid;
            high = mid - 1;
        }
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
    }
    return index;
}
int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int element = 1;
    int index = findFirstOne(arr);
    printf("first 1 of binary array found at index %d\n", index);
    return 0;
}
