/*
46. Write a program in C to find the smallest positive number missing from an unsorted array. Go to the editor
Expected Output :
The given array is : 3 1 4 10 -5 15 2 -10 -20
The smallest positive number missed is: 5
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
void smallestPositive(int *arr, int size)
{
    int i, temp;
    // sort in ascending order
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // check for smallest integer  😪
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        if ((arr[i + 1] - arr[i]) != 1) // check if diff is not 1  😜
        {
            printf("The smallest positive number missed is: %d\n", arr[i] + 1);
            break;
        }
    }
}
int main()
{
    int arr[] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given is : ");
    printarray(arr, size);
    smallestPositive(arr, size);
    return 0;
}
