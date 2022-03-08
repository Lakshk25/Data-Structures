/*
45. Write a program in C to find two elements whose sum is closest to zero. Go to the editor
Expected Output :
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46]
*/

#include <stdio.h>
#include <stdlib.h>

void closeToZero(int arr[], int size)
{
    int i, j, index1, index2;
    int sum = 0;
    int absSum = arr[0] + arr[1];
    for (i = 0; i < size; i++)
    {
        sum = 0;
        for (j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            //check lowest sum closest to zero😊😊
            if (abs(sum) < abs(absSum)) // absolute value i.e -3 = 3 🤟
            {

                index1 = i;
                index2 = j;
                absSum = sum;
            }
        }
    }
    printf("The Pair of elements whose sum is minimum are:\n");
    printf("[%d, %d]", arr[index1], arr[index2]);
}
int main()
{
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int size = sizeof(arr) / sizeof(arr[0]);
    closeToZero(arr, size);
    return 0;
}
