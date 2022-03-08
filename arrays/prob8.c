/*
8. Write a program in C to count the frequency of each element of an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/

#include <stdio.h>
void countOccurance(int arr[], int size, int freq[])
{
    //assign freq to -1
    for (int i = 0; i < size; i++)
    {
        freq[i] = -1;  
    }
    int count;
    // loop for pick element
    for (int i = 0; i < size; i++)
    {
        count = 1;
        // loop for checking
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // to remove same element from array
                freq[j] = 0;
            }
        }
        // to assign counts of element
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    for (int i = 0; i < size; i++)   // loop to assign frequency
    {
        if (freq[i] != 0)
        {
            printf("%d occurance is %d times\n", arr[i], freq[i]);
        }
    }
}
int main()
{
    int arr[] = {2, 1, 4, 1, 5, 4};
    int size = 6;
    int freq[size];
    countOccurance(arr, size, freq);
    return 0;
}
