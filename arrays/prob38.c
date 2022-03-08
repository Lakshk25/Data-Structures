/*
38. Write a program in C to merge one sorted array into another sorted array. Go to the editor
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given Large Array is : 10 12 14 16 18 20 22
The given Small Array is : 11 13 15 17 19 21
After merged the new Array is :
10 11 12 13 14 15 16 17 18 19 20 21 22
*/

#include <stdio.h>
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void mergeArray(int arr1[], int arr2[], int size1, int size2)
{
    int merged[size1 + size2];
    int i = 0, j = 0, k = 0;
    // add numbers by their size in merged array
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++, k++;
        }
        else
        {
            merged[k] = arr2[j];
            j++, k++;
        }
    }
    // copy numbers if left
    while (i < size1)
    {
        merged[k] = arr1[i];
        i++, k++;
    }
    while (j < size2)
    {
        merged[k] = arr2[j];
        j++, k++;
    }

    printArray(merged, size1 + size2);
}
int main()
{
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printArray(arr1, size1);
    printArray(arr2, size2);
    mergeArray(arr1, arr2, size1, size2);
    return 0;
}
