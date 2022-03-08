/*
9. Write a program in C to delete the last node of Singly Linked List. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 1
Input data for node 2 : 2
Input data for node 3 : 3
Expected Output :

Data entered in the list are :                                                                               
Data = 1                                                                                                     
Data = 2                                                                                                     
Data = 3                                                                                                                                                                                                                  
The new list after deletion the last node are  :                                                             
Data = 1                                                                                                     
Data = 2
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
node *deleteEnd(node *head)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *prev = (node *)malloc(sizeof(node *));
    prev = head;
    ptr = prev->next;
    while (ptr->next != NULL)
    {
        prev = prev->next;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
    return head;
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
    head = deleteEnd(head);
    printf("The new list after deletion the last node are  : \n");
    traverseLinkedList(head);
    return 0;
}