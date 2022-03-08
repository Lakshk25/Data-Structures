/*
18. Write a program in C to delete a node from the last of a doubly linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes (3 or more ): 3
Input data for node 1 : 1
Input data for node 2 : 2
Input data for node 3 : 3
Data entered in the list are :
node 1 : 1
node 2 : 2
node 3 : 3
After deletion the new list are :
node 1 : 1
node 2 : 2
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ // to make l list
    int data;
    struct node *next;
    struct node *prev;
} node;
node *head;
void traverseDoublyLinkedList(node *head) // for printing doubly linked list
{
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}
node *deleteEnd(node *head) // code for deletion
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *prev = (node *)malloc(sizeof(node *));
    prev = head;
    ptr = prev->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        prev = prev->next;
    }
    prev->next = NULL;
    free(ptr);
    return head;
}
void doublyLinkedListMaker()
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
    head->prev = NULL;
    temp = head;
    for (int i = 0; i < size - 1; i++)
    {
        new = (node *)malloc(sizeof(node *));
        int data;
        printf("Input data for node %d :  ", i + 2);
        scanf("%d", &data);
        new->data = data;
        temp->next = new;
        new->prev = temp;
        temp = temp->next;
    }
}
int main()
{
    doublyLinkedListMaker();
    printf("Data entered on the list are : \n");
    traverseDoublyLinkedList(head);
    printf("After deletion the new list are :\n");
    head = deleteEnd(head);
    traverseDoublyLinkedList(head);
    return 0;
}
