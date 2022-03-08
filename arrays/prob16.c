/*
16. Write a program in C to find the second largest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
*/

#include <stdio.h>
#include <limits.h>

int secondMax(int arr[], int size)
{
    int max = INT_MIN; // allocate lowest possible value
    int secondMax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    printf("second max number is %d", secondMax);
}
int main()
{
    int arr[] = {2, 3, 8, 6, 9, 1};
    int size = 6;
    secondMax(arr, size);
    return 0;
}
