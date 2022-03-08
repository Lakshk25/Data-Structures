/*
65. Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i]. Go to the editor
Expected Output :
The given array is : 1 2 3 4 5 6
The product array is: 720 360 240 180 144 120
*/

#include <stdio.h>
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void product(int arr[], int size)
{
    int multiply[size];
    int mul = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j) // skip same index😀😀
                continue;
            mul *= arr[j];
        }
        multiply[i] = mul;
        mul = 1;
    }
    printArray(multiply, size);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is :  ");
    printArray(arr, size);
    product(arr, size);
    return 0;
}
