/*
35. Write a program in C to find the largest sum of contiguous subarray of an array. Go to the editor
Expected Output :
The given array is : 8 3 8 -5 4 3 -4 3 5
The largest sum of contiguous subarray is : 21
*/

#include <stdio.h>
#include <limits.h>
void subArray(int arr[], int size)
{
    int sum = INT_MIN, maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            sum = 0;
            //check all possible subarrays
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
            }
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    printf("The largest sum of contiguous subarray is : %d\n", maxSum);
}
int main()
{
    int arr[] = {2, 3, 1, -3, 1, 6};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    subArray(arr, size);
    return 0;
}
