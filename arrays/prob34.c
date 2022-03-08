/*
34. Write a program in C to find the number occurring odd number of times in an array. Go to the editor
All numbers occur even number of times except one number which occurs odd number of times.
Expected Output :
The given array is : 8 3 8 5 4 3 4 3 5
The element odd number of times is : 3
*/

#include <stdio.h>
void checkOddTime(int arr[], int size)
{
    int freq[size];
    for (int i = 0; i < size; i++)
    {
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        // change duplicate elements
        if (freq[i] != 0)
        {
            // check each elements
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 0;
                }
            }
            // check odd counts
            if (count % 2 == 1)
            {
                printf("number %d occurs %d odd number of times!\n", arr[i], count);
            }
        }
    }
}
int main()
{
    int arr[] = {8, 3, 8, 0, 4, 3, 0, 3, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkOddTime(arr, size);
    return 0;
}
