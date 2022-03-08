#include<stdio.h>
void printarray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}
void arrayInsertion(int *arr , int size , int element , int index){
    // int temp = arr[size];
    // size = size+1;
    for(int i = size-1 ; i>=index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
}
int main(){
    int arr[50] = {3,43,12,76,8,23,12};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size = 7;
    int element = 4 ;
    int index = 3;
    printarray(arr , size);
    arrayInsertion(arr , size , element , index);
    printf("array after insertion\n");
    printarray(arr , size+1);
    return 0;
}
