/*
78. Write a program in C to find four array elements whose sum is equal to given number. Go to the editor
Expected Output:
The given array is:
3 7 1 9 15 14 6 2 5 7
The elements are:
3, 15, 14, 5
*/

#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void findSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            for (int k = i + 2; k < size; k++)
                for (int l = i + 3; l < size; l++)
                    if (arr[i] + arr[j] + arr[k] + arr[l] == sum){
                        printf("%d, %d, %d, %d", arr[i], arr[j], arr[k], arr[l]);
                        return;
                        }
}
int main()
{
    int arr[] = {3, 7, 1, 9, 15, 14, 6, 2, 5, 7};
    int sum = 37;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr , size);
    printf("The elements are:\n");
    findSum(arr , size , sum);
    return 0;
}
