/*
25. Write a program in C to insert a node at any position in a circular linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Data entered in the list are :
Data 1 = 2
Data 2 = 5
Data 3 = 8
Input the position to insert a new node : 3
Input data for the position 3 : 7
After insertion the new list are :
Data 1 = 2
Data 2 = 5
Data 3 = 7
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
node *insertAtPosition(node *head, int data, int position)
{
    node *new = (node *)malloc(sizeof(node *));
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head;
    for (int i = 0; i < position - 2; i++)
        ptr = ptr->next;
    new->next = ptr->next;
    ptr->next = new;
    new->data = data;
    return head;
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
    int data, position;
    circularLinkedListMaker();
    printf("Data entered in the list :\n");
    traverseCircularLinkedList(head);
    printf("Input the position to insert a new node : ");
    scanf("%d", &position);
    printf("Input data for the position %d : ", position);
    scanf("%d", &data);
    printf("After insertion the new list are :\n");
    head = insertAtPosition(head, data, position);
    traverseCircularLinkedList(head);
    return 0;
}
