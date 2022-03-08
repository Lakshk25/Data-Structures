/*
33. Write a program in C to find the majority element of an array. Go to the editor
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array.
*/

#include <stdio.h>
void checkMajority(int arr[], int size)
{
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            printf("majority element is %d and occurs %d times\n", arr[i], count);
            break;
        }
        else
        {
            count = 0;
        }
    }
    if (count < size / 2)
    {
        printf("majority element is not found\n");
    }
}
int main()
{
    int arr[] = {4, 8, 4, 8, 8, 8, 8, 8};
    int size = 8;
    checkMajority(arr, size);
    return 0;
}
