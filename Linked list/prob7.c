/*
7. Write a program in C to delete first node of Singly Linked List. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 3
Input data for node 3 : 4
Expected Output :

Data entered in the list are :                                                                               
Data = 2                                                                                                     
Data = 3                                                                                                     
Data = 4                                                                                                                                                                                                                  
Data of node 1 which is being deleted is :  2                                                                                                                                                                             
Data, after deletion of first node :                                                                         
Data = 3                                                                                                     
Data = 4 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ // to make l list
    int data;
    struct node *next;
} node;
node *head;
void traverseLinkedList(node *head) // for printing linked list
{
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}
node *deleteHead(node *head)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head->next;
    free(head);
    return ptr;
}
void linkedListMaker()
{ // to insert data in l list
    int size;
    printf("Input the number of nodes :  ");
    scanf("%d", &size);
    int data;
    node *new, *temp;
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
}
int main()
{
    linkedListMaker();
    printf("Data entered in the list :\n");
    traverseLinkedList(head);
    printf("Data of node 1 which is being deleted is :  %d\n", head->data);
    head = deleteHead(head);
    printf("Data, after deletion of first node :\n");
    traverseLinkedList(head);
    return 0;
}
