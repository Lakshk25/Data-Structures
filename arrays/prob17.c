/*
17. Write a program in C to find the second smallest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4
*/

#include <stdio.h>
#include <limits.h>

int secondMin(int arr[], int size)
{
    int min = INT_MAX; // allocate highest possible value
    int secondMin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] > min && arr[i] < secondMin)
        {
            secondMin = arr[i];
        }
    }
    printf("second min number is %d", secondMin);
}
int main()
{
    int arr[] = {7, 3, 4, 6, 9, 8};
    int size = 6;
    secondMin(arr, size);
    return 0;
}