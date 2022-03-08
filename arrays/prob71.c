/*
71. Write a program in C to find the median of two sorted arrays of different size. Go to the editor
Expected Output:
The given first array is : 90 240 300
The given second array is : 10 13 14 20 25
The median of two different size arrays are : 22.500000
*/

#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
float median(int arr[], int size)
{
    int mid = size / 2;
    if (size % 2 == 0)
    {
        float med = (arr[mid - 1] + arr[mid]) / 2;
        printf("The median of two different size arrays are : %f", med);
    }
}
float mergeArray(int arr1[], int arr2[], int size1, int size2)
{
    int i = 0, j = 0, k = 0;
    int merged[size1 + size2];
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
    median(merged, size1 + size2);
}

int main()
{
    int arr1[] = {90, 240, 300};
    int arr2[] = {10, 13, 14, 20, 25};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    printf("The given first array is : ");
    printarray(arr1, size1);
    printf("The given second array is : ");
    printarray(arr2, size2);
    mergeArray(arr1, arr2, size1, size2);
    return 0;
}
