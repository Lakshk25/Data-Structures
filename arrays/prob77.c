/*
77. Write a program in C to generate a random permutation of array elements. Go to the editor
Expected Output:
The given array is:
1 2 3 4 5 6 7 8
The shuffled elements in the array are:
2 8 7 3 4 5 1 6
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void change(int *a , int *b){ // change value
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void shuffleArray(int arr[] , int size){
    srand(time(NULL)); // random time
    for (int i = 0; i < size; i++)
    {
        int j = rand() % (i+1);
        change(&arr[i] , &arr[j]);
    }
    
}
int main(){
    int arr[] = {1, 2 , 3 , 4 , 5 , 6 , 7 , 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is : ");
    printarray(arr , size);
    shuffleArray(arr , size);
    printf("The shuffled elements in the array are:\n");
    printarray(arr , size);
    return 0;
}
