/*
32. Write a program in C to find a pair with given sum in the array. Go to the editor
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
*/

#include <stdio.h>
void checkSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("sum found at index [%d] = %d and [%d] = %d\n", i, arr[i], j, arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {6, 8, 4, 5, 7, 9};
    int size = 6;
    int sum = 15;
    checkSum(arr, size, sum);
    return 0;
}
