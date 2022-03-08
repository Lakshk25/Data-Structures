/*
62. Write a program in C to find the largest subarray with equal number of 0s and 1s. Go to the editor
Expected Output :
The given array is : 0 1 0 0 1 1 0 1 1 1
Subarray found from the index 0 to 7
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
void subArray(int arr[], int size)
{
    int total = 0;
    int start, end;
    for (int i = 0; i < size; i++)
    {
        int ones = 0, zeroes = 0, sum = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[j] == 0)
                zeroes++;
            if (arr[j] == 1)
                ones++;
            int sum = ones + zeroes;
            if (zeroes == ones && total < sum)
            {
                total = sum;
                start = i;
                end = j;
            }
        }
    }
    printf("Subarray found from the index %d to %d", start, end);
}
int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printArray(arr, size);
    subArray(arr, size);
    return 0;
}
