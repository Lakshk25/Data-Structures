/*
7. Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
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
void sortedDescending(int *arr1, int *arr2, int *arr3, int size1, int size2, int size3)
{
    // code for merging
    int i, j;
    for (i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < size2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    // code for descing sorting for ascending change > to <
    for (int a = 0; a < size3; a++)
    {
        int temp;
        for (int b = a + 1; b < size3; b++)
        {
            if (arr3[a] < arr3[b])
            {
                temp = arr3[a];
                arr3[a] = arr3[b];
                arr3[b] = temp;
            }
        }
    }
}
int main()
{
    int arr1[] = {2, 3, 5};
    int arr2[] = {8, 2, 6};
    int size1 = 3;
    int size2 = 3;
    int arr3[size1 + size2];
    int size3 = 6;
    sortedDescending(arr1, arr2, arr3, size1, size2, size3);
    printarray(arr3, 6);
    return 0;
}
