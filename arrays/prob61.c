/*
61. Write a program in C to find maximum product subarray in a given array. Go to the editor
Expected Output :
The given array is : -4 9 -7 0 -15 6 2 -3
The maximum product of a sub-array in the given array is: 540
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
int subMul(int arr[], int size)
{
    int maxMul = 0;
    for (int i = 0; i < size; i++)
    {
        int mul = 1;
        for (int j = i; j < size; j++)
        {
            mul *= arr[j];
            if (mul > maxMul)
                maxMul = mul;
        }
    }
    return maxMul;
}
int main()
{
    int arr[] = {-4, 9, -7, 0, -15, 6, 2, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printArray(arr, size);
    int maxMul = subMul(arr, size);
    printf("The maximum product of a sub-array in the given array is: %d", maxMul);
    return 0;
}
