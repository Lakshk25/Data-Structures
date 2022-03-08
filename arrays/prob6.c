/*  6. Write a program in C to print all unique elements in an array. Go to the editor
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
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
int checkUnique(int arr[], int size)
{
    int j;
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                break;
            }
        }
        if (j == size)
        {
            printf("uniqes are (%d) -> %d\n", count, arr[i]);
            count++;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 2, 4, 1};
    int size = 5;
    printarray(arr, size);
    checkUnique(arr, size);
    // printf("%d\n", checkUnique(arr , size));
    return 0;
}
