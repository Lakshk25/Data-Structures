/*
79. Write a program in C to sort n numbers in range from 0 to n^2. Go to the editor
Expected Output:
The given array is: 37 62 52 7 48 3 15 61
Sorted array is: 3 7 15 37 48 52 61 62
*/

#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        
}
int main()
{
    int arr[] = {37, 62, 52, 7, 48, 3, 15, 61};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    sort(arr, size);
    printf("Sorted array is: ");
    printarray(arr, size);
    return 0;
}
