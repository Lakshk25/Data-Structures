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
int checkDuplicate(int *arr, int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count = 1;
            }
        }
    }
    if(count==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int arr[] = {2, 5, 21, 1,1, 7};
    int size = 5;
    int check = checkDuplicate(arr , size);
    if(check==0){
        printf("all are unique\n");
    }
    else{
        printf("duplicate found\n");
    }
    return 0;
}
