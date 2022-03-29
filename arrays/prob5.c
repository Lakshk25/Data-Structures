/* 5. Write a program in C to count a total number of duplicate elements in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/
#include <stdio.h>
void checkTotalDuplicate(int arr[], int size)
{
    int res[size];
    int count = 1;
    int result = 0;
    // assign value to zero
    for (int i = 0; i < size; i++)
    {
        res[i] = 0;
    }
    // code for check number
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                res[j] = -1;
            }
        }
        if (count > 1 && res[i] != -1)
        {
            result++;
        }
    }
    printf("Total number of duplicate elements found in the array is : %d", result);
}
int main()
{
    int arr[] = {5, 5, 2, 5, 2, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkTotalDuplicate(arr, size);
    return 0;
}
