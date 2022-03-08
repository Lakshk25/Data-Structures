/*
14. Write a program in C to insert New value in the array (unsorted list ). Go to the editor
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
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
void insert(int arr[], int size, int number, int position)
{
    position--;
    for (int i = size; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = number;
}
int main()
{
    int arr[] = {3, 6, 1, 9, 2, 6};
    int size = 6;
    int number = 4;
    int position = 3;
    printarray(arr, size);
    insert(arr, size, number, position);
    printarray(arr, size + 1);
    return 0;
}
