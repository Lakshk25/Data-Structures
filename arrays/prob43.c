/*
43. Write a program in C to to print next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1. Go to the editor
Expected Output :
The given array is : 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1
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
void findNextBig(int arr[], int size)
{
    int count = 0;
    int bigger[size];
    // print all elements with bigger values
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                printf("Next bigger element of %d in the array is: %d\n", arr[i], arr[j]);
                count++;
                bigger[i] = arr[j];
                break;
            }
        }
        if (i == size - 1)
        {
            printf("Next bigger element of %d in the array is: -1\n", arr[i]);
        }
    }
    printf("Next Bigger Elements Array:\n");
    bigger[count] = -1; // add number for last element
    printarray(bigger, count + 1);
}
int main()
{
    int arr[] = {5, 3, 10, 9, 6, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Next Bigger Elements are:\n");
    findNextBig(arr, size);
    return 0;
}
