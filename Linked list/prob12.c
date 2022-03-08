/*
12. Write a program in C to create a doubly linked list and display in reverse order. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 2
Input data for node 2 : 5
Input data for node 3 : 8
Expected Output :

Data in reverse order are :                                                                                  
Data in node 1 : 8                                                                                           
Data in node 2 : 5                                                                                           
Data in node 3 : 2  
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
void traverseLinkedList(node *head) // for printing doubly linked list
{
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}
void reverseTraverseLinkedList(node *head) // for printing reverse doubly linked list
{
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->prev;
    }
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
    printf("Data in reverse order are :\n");
    reverseTraverseLinkedList(temp);
}
int main()
{
    doublyLinkedListMaker();
    return 0;
}
