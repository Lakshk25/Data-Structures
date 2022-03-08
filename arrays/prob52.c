/*
52. Write a program in C to count the number of triangles can be fromed from a given array. Go to the editor
Expected Output :
The given array is : 6 18 9 7 10
Number of possible triangles can be formed from the array is: 5
*/

// if a + b > c  it is a triangle
#include <stdio.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void findTriangles(int arr[], int size)
{
    int count = 0;
    int temp = 0;
    for (int i = 0; i < size; i++) // for sorting in ascending 🤔
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) // for counting triangles😊
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((arr[i] + arr[j]) > arr[k])
                {
                    count++;
                }
            }
        }
    }
    printf("Number of possible triangles can be formed from the array is: %d", count);
}
int main()
{
    int arr[] = {6, 18, 9, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr, size);
    findTriangles(arr, size);
    return 0;
}
