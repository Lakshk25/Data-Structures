/*
80. Write a program in C to count all distinct pairs for a specific difference. Go to the editor
Expected Output:
The given array is:
5 2 3 7 6 4 9 8
The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
Number of distinct pairs for difference 5 are: 3
*/

#include<stdio.h>
#include<stdlib.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int findPairs(int arr[] , int size , int element){
    int count = 0;
    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if(abs(arr[i] - arr[j]) == element){
                count++;
                printf("[%d , %d] " , arr[i] , arr[j]);
            }
    return count;
}
int main(){
    int arr[] = {5, 2, 3, 7, 6, 4, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 5;
    printf("The given array is : ");
    printarray(arr, size);
    printf("The distinct pairs for difference %d are: " , element);
    int j = findPairs(arr , size , element);
    printf("\n");
    printf("Number of distinct pairs for difference %d are: %d" ,element, j);
    return 0;
}
