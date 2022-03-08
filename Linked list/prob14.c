/*
14. Write a program in C to insert a new node at the end of a doubly linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Data entered in the list are :
node 1 : 2
node 2 : 5
node 3 : 8
Input data for the last node : 9
After insertion the new list are :
node 1 : 2
node 2 : 5
node 3 : 8
node 4 : 9
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
node *insertAtEnd(node *head, int data) // code for insertion
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *new = (node *)malloc(sizeof(node *));
    ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new;
    new->data = data;
    new->next = NULL;
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
    int data;
    doublyLinkedListMaker();
    printf("Data entered on the list are : \n");
    traverseDoublyLinkedList(head);
    printf("Input data for the last node : ");
    scanf("%d", &data);
    head = insertAtEnd(head, data);
    traverseDoublyLinkedList(head);
    return 0;
}
