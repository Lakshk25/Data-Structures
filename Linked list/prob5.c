/*
5. Write a program in C to insert a new node at the end of a Singly Linked List. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
Input data for node 1 : 5                                                                                    
Input data for node 2 : 6                                                                                    
Input data for node 3 : 7                                                                                                                                                                                                 
Data entered in the list are :                                                                               
Data = 5                                                                                                     
Data = 6                                                                                                     
Data = 7                                                                                                                                                                                                                  
Input data to insert at the end of the list : 8                                                                                                                                                                           
Data, after inserted in the list are :                                                                       
Data = 5                                                                                                     
Data = 6                                                                                                     
Data = 7                                                                                                     
Data = 8
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
node *insertAtEnd(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *new = (node *)malloc(sizeof(node *));
    ptr = head;
    
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    new->data = data;
    new->next = NULL;
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
    int data;
    linkedListMaker();
    printf("Data entered in the list :\n");
    traverseLinkedList(head);
    printf("Input data to insert at the end of the list : ");
    scanf("%d", &data);
    head = insertAtEnd(head, data);
    printf("Data after inserted in the list are : \n");
    traverseLinkedList(head);
    return 0;
}