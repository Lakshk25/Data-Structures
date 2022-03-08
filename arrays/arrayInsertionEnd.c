#include<stdio.h>
void printarray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[50] = {3,43,12,76,8,23,12};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size = 7;
    int element = 4 ;
    printarray(arr , size);
    printf("array after insertion\n");
    size += 1;
    // arr[size+1] = arr[element];
    arr[size-1] = element;
    printarray(arr , size);
    return 0;
}
