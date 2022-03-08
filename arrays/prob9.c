/*
9. Write a program in C to find the maximum and minimum element in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/

#include <stdio.h>
void maxMin(int arr[], int size)
{
    // code for maximum
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (arr[i] > arr[j] && max < arr[i])
            {
                max = arr[i];
            }
        }
    }
    printf("%d is the maximum number\n", max);

    // Code for minimum
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (arr[i] < arr[j] && min > arr[i])
            {
                min = arr[i];
            }
        }
    }
    printf("%d is the minimum number\n", min);
}

int main()
{
    int arr[] = {2, 4, 1, 8, 5, 0};
    int size = 6;
    maxMin(arr, size);
    return 0;
}
