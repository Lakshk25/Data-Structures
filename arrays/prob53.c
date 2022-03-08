/*
53. Write a program in C to find the number of times (frequency) occurs a given number in an array. Go to the editor
Expected Output :
The given array is : 2 3 4 4 4 4 5 5 5 6 7 7
The number of times the number 4 occurs in the given array is: 4
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
// to search index of number
int binarySearch(int arr[], int left, int right, int number)
{
    if (left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (arr[mid] == number)
    {
        return mid;
    }

    if (arr[mid] > number)
    {
        return binarySearch(arr, left, mid - 1, number);
    }
    else
    {
        return binarySearch(arr, mid + 1, right, number);
    }
}
// to count number of occurance
int findOccurance(int arr[], int size, int number)
{
    int index = binarySearch(arr, 0, size - 1, number);
    int count = 1;
    int left = index - 1;
    while (left >= 0 && arr[left] == number) // if present in left side
    {
        count++, left--;
    }
    int right = index + 1;
    while (right < size && arr[right] == number) // if present in right size
    {
        count++, right++;
    }
    return count;
}
int main()
{
    int arr[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 4;
    printf("The given array is : ");
    printarray(arr, size);
    int occurance = findOccurance(arr, size, number);
    printf("The number of times the number %d occurs in the given array is: %d", number, occurance);
    return 0;
}
