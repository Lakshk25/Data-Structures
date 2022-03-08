/*
21. Write a program in C to find the maximum value from a doubly linked list. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 9
Input data for node 3 : 1
Expected Output :

Data entered in the list are :
node 1 : 5
node 2 : 9
node 3 : 1
The Maximum Value in the Linked List : 9
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
void findMax(node *head) // to find max
{
    int max = 0;
    while (head != NULL)
    {
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    printf("The Maximum Value in the Linked List : %d", max);
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
    int data, position;
    doublyLinkedListMaker();
    printf("Data entered on the list are : \n");
    traverseDoublyLinkedList(head);
    findMax(head);
    return 0;
}
