/*
47. Write a program in C to find a subarray with given sum from the given array. Go to the editor
Expected Output :
The given array is : 3 4 -7 1 3 3 1 -4
[0..1] -- { 3 4 }
[0..5] -- { 3 4 -7 1 3 3 }
[3..5] -- { 1 3 3 }
[4..6] -- { 3 3 1 }
*/

#include <stdio.h>
void printarray(int arr[], int size) // for printing full array
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void printSub(int arr[], int a, int j) // for individual subarray
{
    for (int i = a; i < j + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

void subarraySum(int arr[], int size, int sum)
{
    int checkSum = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        checkSum = 0;
        for (int j = i; j < size; j++)
        {
            checkSum += arr[j];
            if (checkSum == sum)
            {
                printf("[%d..%d] {", i, j);
                printSub(arr, i, j);
            }
        }
    }
}
int main()
{
    int arr[] = {3, 4, -7, 1, 3, 3, 1, -4};
    int sum = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    subarraySum(arr, size, sum);
    return 0;
}
