/*
6. Write a program in C to insert a new node at the middle of Singly Linked List. Go to the editor
Test Data and Expected Output :

Input the number of nodes (3 or more) : 4                                                                    
Input data for node 1 : 1                                                                                    
Input data for node 2 : 2                                                                                    
Input data for node 3 : 3                                                                                    
Input data for node 4 : 4                                                                                                                                                                                                 
Data entered in the list are :                                                                               
Data = 1                                                                                                     
Data = 2                                                                                                     
Data = 3                                                                                                     
Data = 4                                                                                                                                                                                                                  
Input data to insert in the middle of the list : 5                                                           
Input the position to insert new node : 3                                                                                                                                                                                 
Insertion completed successfully.                                                                                                                                                                                          
The new list are :                                                                                           
Data = 1                                                                                                     
Data = 2                                                                                                     
Data = 5                                                                                                     
Data = 3                                                                                                     
Data = 4 
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
node *insertAtPosition(node *head, int data, int position)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *new = (node *)malloc(sizeof(node *));
    ptr = head;
    for (int i = 0; i < position - 2; i++)
        ptr = ptr->next;

    new->data = data;
    new->next = ptr->next;
    ptr->next = new;
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
    int data, position;
    linkedListMaker();
    printf("Data entered in the list :\n");
    traverseLinkedList(head);
    printf("Input data to insert in the middle of the list : ");
    scanf("%d", &data);
    printf("Input the position to insert new node : ");
    scanf("%d", &position);
    printf("Insertion completed successfully.\n");
    head = insertAtPosition(head, data, position);
    printf("Data after inserted in the list are : \n");
    traverseLinkedList(head);
    return 0;
}