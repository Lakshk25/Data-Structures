/*
23. Write a program in C to insert a node at the beginning of a circular linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Data entered in the list are :
Data 1 = 2
Data 2 = 5
Data 3 = 8
Input data to be inserted at the beginning : 1
After insertion the new list are :
Data 1 = 1
Data 2 = 2
Data 3 = 5
Data 4 = 8
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
node *insertHead(node *head, int data)
{
    node *new = (node *)malloc(sizeof(node *));
    new->data = data;
    new->next = head;
    end->next = new;
    return new;
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
    int data;
    circularLinkedListMaker();
    printf("Data entered in the list :\n");
    traverseCircularLinkedList(head);
    printf("Input data to be inserted at the beginning : ");
    scanf("%d", &data);
    printf("After insertion the new list are :\n");
    head = insertHead(head, data);
    traverseCircularLinkedList(head);
    return 0;
}
