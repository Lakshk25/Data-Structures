/*
69. Write a program in C to find out the maximum difference between any two elements such that larger element appears after the smaller number. Go to the editor
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is: 8
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
void findDiff(int arr[], int size)
{
    int num1, num2;
    int diff = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                continue;
            else if (diff < (arr[j] - arr[i]))
            {
                num1 = i;
                num2 = j;
                diff = (arr[j] - arr[i]);
            }
        }
    }
    printf("The elements which provide maximum difference is: %d, %d\n", arr[num1], arr[num2]);
    printf("The Maximum difference between two elements in the array is: %d", diff);
}
int main()
{
    int arr[] = {7, 9, 5, 6, 13, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    findDiff(arr, size);
    return 0;
}
