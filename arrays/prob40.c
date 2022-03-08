/*
40. Write a program in C to find the ceiling in a sorted array. Go to the editor
N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Expected Output :
The given array is : 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7
*/

#include <stdio.h>
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void findCeiling(int arr[], int size, int number)
{
    int ceiling = 0;
    for (int i = 0; i < size; i++)
    {
        // if greater found break loop
        if (arr[i] > number)
        {
            ceiling = arr[i];
            break;
        }
    }
    printf("The ceiling of %d is : %d ", number, ceiling);
}

int main()
{
    int arr[] = {1, 3, 4, 7, 8, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 5;
    findCeiling(arr, size, number);
    return 0;
}
