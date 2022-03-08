/*
8. Write a program in C to delete a node from the middle of Singly Linked List. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3                                                                                
Input data for node 1 : 2                                                                                    
Input data for node 2 : 5                                                                                    
Input data for node 3 : 8                                                                                                                                                                                                 
Data entered in the list are :                                                                               
Data = 2                                                                                                     
Data = 5                                                                                                     
Data = 8                                                                                                                                                                                                                  
Input the position of node to delete : 2                                                                                                                                                                                  
Deletion completed successfully.                                                                                                                                                                                          
The new list are  :                                                                                          
Data = 2                                                                                                     
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
node *deleteAtPosition(node *head, int position)
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
    free(ptr);
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
    int position;
    linkedListMaker();
    printf("Data entered in the list :\n");
    traverseLinkedList(head);
    printf("Input the position of node to delete : ");
    scanf("%d", &position);
    head = deleteAtPosition(head, position);
    printf("Deletion completed successfully. \n");
    printf("The new list are  :\n");
    traverseLinkedList(head);
    return 0;
}