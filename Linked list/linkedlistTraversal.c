#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node * next;
}node;
void traverseLinkedList(node * head){
    while (head!=NULL)
    {
        printf("%d\n" , head->data);
        head = head->next;
    }
    
}
int main(){
    node *head , *second , *third;
    head = (node*) malloc(sizeof(node*));
    second = (node*) malloc(sizeof(node*));
    third = (node*) malloc(sizeof(node*));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    traverseLinkedList(head);
    return 0;
}
