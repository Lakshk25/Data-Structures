/*
2. Write a program in C to create a singly linked list of n nodes and display it in reverse order. Go to the editor
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

Data entered in the list are :                                                                               
Data = 5                                                                                                     
Data = 6                                                                                                     
Data = 7                                                                                                                                                                                                                 
The list in reverse are :                                                                                    
Data = 7                                                                                                     
Data = 6                                                                                                     
Data = 5 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{ // to make l list
    int data;
    struct node *next;
} node;

void traverseLinkedList(node *head) // for printing linked list
{
    printf("Data entered in the list :\n");
    while (head != NULL)
    {
        printf("Data = %d\n", head->data);
        head = head->next;
    }
}
void reverseLinked(node *head)
{
    node *prev = (node *)malloc(sizeof(node *));
    node *curr = (node *)malloc(sizeof(node *));
    prev = head;
    curr = head->next;
    head = head->next;
    prev->next = NULL;
    while (head != NULL)
    {
        head = head->next;
        curr->next = prev;
        prev = curr;
        curr = head;
    }
    head = prev;
    traverseLinkedList(head);
}
void linkedListMaker()
{ // to insert data in l list
    int size;
    printf("Input the number of nodes :  ");
    scanf("%d", &size);
    int data;
    node *head, *new, *temp;
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
    traverseLinkedList(head);
    reverseLinked(head);
    // traverseLinkedList(head);
}
int main()
{
    linkedListMaker();
    return 0;
}
