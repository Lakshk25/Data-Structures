/*
10. Write a program in C to search an existing element in a singly linked list. Go to the editor
Test Data and Expected Output :

Input the number of nodes : 3                                                                                                                                                                                             
Input data for node 1 : 2                                                                                    
Input data for node 2 : 5                                                                                    
Input data for node 3 : 8                                                                                                                                                                                                 
Data entered in the list are :                                                                               
Data = 2                                                                                                     
Data = 5                                                                                                     
Data = 8                                                                                                                                                                                                                  
Input the element to be searched : 5                                                                         
Element found at node 2 
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
void findElement(node *head, int element)
{
    int i = 0;
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head;
    while (ptr->data != element && ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr->next != NULL)
        printf("element found at node %d", i + 1);
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
    int element;
    linkedListMaker();
    printf("Data entered in the list :\n");
    traverseLinkedList(head);
    printf("Input the element to be searched : ");
    scanf("%d", &element);
    findElement(head, element);
    return 0;
}
