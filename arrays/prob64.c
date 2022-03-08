/*
64. Write a program in C to find the median of two sorted arrays of same size. Go to the editor
Expected Output :
The given array - 1 is : 1 5 13 24 35
The given array - 2 is : 3 8 15 17 32
The Median of the 2 sorted arrays is: 14😍😍
*/

#include <stdio.h>
int findMedian(int arr[], int size);
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int mergeArray(int arr1[], int arr2[], int size1, int size2)
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
    findMedian(merged, size1 + size2);
}
int findMedian(int arr[], int size)
{
    int mid = (0 + size - 1) / 2;
    if (size % 2 == 0)
    {
        int result = (arr[mid] + arr[mid + 1]) / 2;
        printf("The Median of the 2 sorted arrays is : %d", result);
    }
    else
        printf("The Median of the 2 sorted arrays is : %d", arr[mid]);
}
int main()
{
    int arr1[] = {1, 5, 13, 24, 35};
    int arr2[] = {3, 8, 15, 17, 32};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printArray(arr1, size1);
    printArray(arr2, size2);
    mergeArray(arr1, arr2, size1, size2);
    return 0;
}
