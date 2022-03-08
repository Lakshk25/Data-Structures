/*
29. Write a program in C to search an element in a circular linked list. Go to the editor
Test Data and Expected Output :

Circular Linked List : Search an element in a circular linked list :
------------------------------------------------------------------------
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 9
Data entered in the list are :
Data 1 = 2
Data 2 = 5
Data 3 = 9
Input the element you want to find : 5
Element found at node 2
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ // to make l list
    int data;
    struct node *next;
} node;
node *head, *end;
void traverseCircularLinkedList(node *head) // for printing circular linked list
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head;
    int i = 0;
    do
    {
        printf("Data %d = %d\n", i + 1, ptr->data);
        ptr = ptr->next;
        i++;
    } while (ptr != head);
}
void findElement(node *head, int element)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head;
    int position = 1;
    while (ptr->data != element && ptr->next != head)
    {
        ptr = ptr->next;
        position++;
    }
    if (ptr != head)
        printf("Element found at node %d", position);
}
void circularLinkedListMaker()
{ // to insert data in circular linked list
    int size;
    printf("Input the number of nodes :  ");
    scanf("%d", &size);
    int data;
    node *new;
    head = (node *)malloc(sizeof(node *));
    end = (node *)malloc(sizeof(node *));
    printf("Input data for node 1 :  ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    end = head;
    for (int i = 0; i < size - 1; i++)
    {
        new = (node *)malloc(sizeof(node *));
        int data;
        printf("Input data for node %d :  ", i + 2);
        scanf("%d", &data);
        new->data = data;
        new->next = NULL;
        end->next = new;
        end = end->next;
    }
    end->next = head;
}
int main()
{
    int element;
    circularLinkedListMaker();
    printf("Data entered in the list :\n");
    traverseCircularLinkedList(head);
    printf("Input the element you want to find : ");
    scanf("%d", &element);
    findElement(head, element);
    return 0;
}
