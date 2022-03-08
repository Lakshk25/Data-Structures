/*
find previous and next alphabet in the array
*/

#include <stdio.h>
char findPreviousAlphabet(char arr[], int size, char character)
{
    int low = 0;
    int high = size - 1;
    char alphabet;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == character)
        {
            high = mid - 1;
        }
        else if (arr[mid] < character)
        {
            alphabet = arr[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return alphabet;
}

char findNextAlphabet(char arr[], int size, char character)
{
    int low = 0;
    int high = size - 1;
    char alphabet;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == character)
        {
            low = mid + 1;
        }
        else if (arr[mid] > character)
        {
            alphabet = arr[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return alphabet;
}

int main()
{
    char arr[] = {'a', 'b', 'c', 'e', 'f', 'h', 'j', 'l', 'm'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char character = 'c';
    char previous = findPreviousAlphabet(arr, size, character);
    char next = findNextAlphabet(arr, size, character);
    printf("previous letter of %c is %c\n", character, previous);
    printf("next letter of %c is %c\n", character, next);
    return 0;
}
