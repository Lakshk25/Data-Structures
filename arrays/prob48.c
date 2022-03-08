/*
48. Write a program in C to find if a given integer x appears more than n/2 times in a sorted array of n integers. Go to the editor
Expected Output :
The given array is : 1 3 3 5 4 3 2 3 3
The given value is : 3
3 appears more than 4 times in the given array[]
*/

#include <stdio.h>
void appearTimes(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= (size / 2))
        {
            printf("%d appears more than %d times in the given array[]", arr[i], count);
        }
    }
}
int main()
{
    int arr[] = {1, 3, 3, 5, 4, 3, 2, 3, 3};
    int check = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    appearTimes(arr, size);
    return 0;
}
