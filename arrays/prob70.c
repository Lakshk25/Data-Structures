/*
70. Write a program in C to find two numbers that occur odd number of times in an array. Go to the editor
Expected Output:
The given array is: 6 7 3 6 8 7 6 8 3 3
The two numbers occuring odd number of times are: 3 & 6
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
void oddTimes(int arr[], int size)
{
    int repeat[size];
    for (int i = 0; i < size; i++)
    {
        repeat[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                repeat[j] = 0;
            }
        }
        if (repeat[i] != 0 && count % 2 == 1)
            printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    printf("The numbers occuring odd number of times are: ");
    oddTimes(arr, size);
    return 0;
}
