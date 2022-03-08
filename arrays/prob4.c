/*4. Write a program in C to copy the elements of one array into another array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
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
void arrayCopy(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
}
int main()
{
    int arr1[] = {4, 5, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[size];
    printarray(arr1, size);
    arrayCopy(arr1, arr2, size);
    printarray(arr2, size);
    return 0;
}
