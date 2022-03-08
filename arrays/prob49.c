/*
49. Write a program in C to find majority element of an array. Go to the editor
Expected Output :
The given array is : 1 3 3 7 4 3 2 3 3
The majority of the Element : 3
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
void findMajority(int *arr, int size)
{
    int count = 1;
    int majority = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > majority)  // check if greater
            majority = arr[i];
    }
    printf("The majority of the Element : %d", majority);
}
int main()
{
    int arr[] = {1, 3, 3, 7, 4, 3, 2, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    findMajority(arr, size);
    return 0;
}
