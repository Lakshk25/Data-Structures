/*
13. Write a program in C to insert New value in the array (sorted list ).. Go to the editor
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
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
void sortAscending(int *arr, int size, int number)
{
    arr[size] = number;
    for (int i = 0; i < size + 1; i++)
    {
        for (int j = i + 1; j < size + 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // for (int i = 0; i < size+1; i++)
    // {
    //     if(number<arr[i]){
    //         int temp;
    //     }
    // }
}
int main()
{
    int arr[] = {2, 6, 8, 1, 6, 2};
    int size = 6;
    int number = 5;
    printarray(arr, size);
    sortAscending(arr, size, number);
    printarray(arr, size + 1);
    return 0;
}