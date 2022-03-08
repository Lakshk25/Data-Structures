/*
36. Write a program in C to find the missing number from a given array. There are no duplicates in list. Go to the editor
Expected Output :
The given array is : 1 3 4 2 5 6 9 8
The missing number is : 7
*/

#include <stdio.h>
void findMissing(int arr[], int size)
{
    // one number is missing so we add extra space it i.e. n*(n+1)/2
    int actualSize = (size + 1) * (size + 2) / 2;
    int sum = 0, number;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    number = actualSize - sum;
    printf("The missing number is : %d\n", number);
}
int main()
{
    // only add natural number from 1 to n
    int arr[] = {6, 5, 1, 3, 4, 9, 8, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, size);
    return 0;
}
