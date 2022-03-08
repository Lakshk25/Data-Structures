/*
37. Write a program in C to find the pivot element of a sorted and rotated array using binary search. Go to the editor
Pivot element is the only element in input array which is smaller than it's previous and after element .
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given array is : 16, 18, 22, 25, 1, 3, 5, 6, 7, 10
The Pivot Element in the array is : 3
*/

#include <stdio.h>
int findPivot(int arr[], int left, int right)
{
    if (right < left)
    {
        return -1;
    }

    if (left == right)
    {
        return left;
    }
    int mid = (left + right) / 2;
    if (mid < right && arr[mid] > arr[mid + 1])
    {
        return mid;
    }
    if (mid > left && arr[mid] < arr[mid - 1])
    {
        return mid - 1;
    }
    if (arr[left] >= arr[mid])
    {
        return findPivot(arr, left, mid - 1);
    }
    else
    {
        return findPivot(arr, mid + 1, right);
    }
}
int main()
{
    int arr[] = {16, 18, 22, 25, 1, 3, 5, 6, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = findPivot(arr, 0, size - 1);
    printf("Pivot element is %d", arr[j + 1]);
    return 0;
}
