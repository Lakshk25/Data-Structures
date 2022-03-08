/*
10. Write a program in C to separate odd and even integers in separate arrays. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/

#include <stdio.h>
void evenOdd(int arr[], int size)
{
    int even[size], odd[size];
    int a = 0, b = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[a] = arr[i];
            a++;
        }
        else
        {
            odd[b] = arr[i];
            b++;
        }
    }
    // for even numbers
    for (int x = 0; x < a; x++)
    {
        printf("%d ", even[x]);
    }
    printf("\n");
    // for odd numbers
    for (int y = 0; y < b; y++)
    {
        printf("%d ", odd[y]);
    }
}
int main()
{
    int arr[] = {2, 3, 1, 6, 4, 9};
    // int even[] = {};
    // int odd[] = {};
    int size = 6;
    evenOdd(arr, size);
    return 0;
}
