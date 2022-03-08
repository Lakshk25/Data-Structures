/*
15. Write a program in C to delete an element at desired position from an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
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
void deletion(int arr[], int size, int position)
{
    for (int i = position - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[] = {2, 3, 8, 1, 6, 7};
    int size = 6;
    int position = 3;
    printarray(arr, size);
    deletion(arr, size, position);
    printarray(arr, size - 1);
    return 0;
}
