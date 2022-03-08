/*
27. Write a program in C to delete a node from the middle of a circular linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Data entered in the list are :
Data 1 = 2
Data 2 = 5
Data 3 = 8
Input the position to delete the node : 3
The deleted node is : 8
After deletion the new list are :
Data 1 = 2
Data 2 = 5
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
node *deleteByPosition(node *head, int position) // code for deletion
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *prev = (node *)malloc(sizeof(node *));
    prev = head;
    ptr = prev->next;
    for (int i = 0; i < position - 2; i++)
    {
        prev = prev->next;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    printf("The deleted node is : %d\n", ptr->data);
    free(ptr);
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
    int position;
    circularLinkedListMaker();
    printf("Data entered in the list :\n");
    traverseCircularLinkedList(head);
    printf("Input the position to delete the node : ");
    scanf("%d", &position);
    head = deleteByPosition(head, position);
    printf("After deletion the new list are :\n");
    traverseCircularLinkedList(head);
    return 0;
}
