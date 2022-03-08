/*
55. Write a program in C to check whether an array is subset of another array. Go to the editor
Expected Output :
The given first array is : 4 8 7 11 6 9 5 0 2
The given second array is : 5 4 2 0 6
The second array is the subset of first array.
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
void subSet(int set[], int size1, int sub[], int size2)
{
    int count = 0;
    // compare each element of subset with set
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (sub[i] == set[j])
            {
                count++;
                break;
            }
        }
    }
    if (count == size2)
    {
        printf("The second array is the subset of first array.");
    }
    else
    {
        printf("The second array is not the subset of first array.");
    }
}
int main()
{
    int set[] = {4, 8, 7, 11, 6, 9, 5, 0, 2};
    int sub[] = {5, 4, 2, 0, 6};
    int size1 = sizeof(set) / sizeof(set[0]);
    int size2 = sizeof(sub) / sizeof(sub[0]);
    printf("The given first array is : ");
    printarray(set, size1);
    printf("The given second array is : ");
    printarray(sub, size2);
    subSet(set, size1, sub, size2);
    return 0;
}
