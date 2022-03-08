/*
1. Write a program in C to create and display Singly Linked List. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

Data entered in the list :                                                                                   
Data = 5                                                                                                     
Data = 6                                                                                                     
Data = 7 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ // to make l list
    int data;
    struct node *next;
} node;
void traverseLinkedList(node *head) // for printing linked list
{
    printf("Data entered in the list :\n");
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}
void linkedListMaker()
{ // to insert data in l list
    int size;
    printf("Input the number of nodes :  ");
    scanf("%d", &size);
    int data;
    node *head, *new, *temp;
    head = (node *)malloc(sizeof(node *));
    temp = (node *)malloc(sizeof(node *));
    printf("Input data for node 1 :  ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (int i = 0; i < size - 1; i++)
    {
        new = (node *)malloc(sizeof(node *));
        int data;
        printf("Input data for node %d :  ", i + 2);
        scanf("%d", &data);
        new->data = data;
        new->next = NULL;
        temp->next = new;
        temp = temp->next;
    }
    traverseLinkedList(head);
}
int main()
{
    linkedListMaker();
    return 0;
}
