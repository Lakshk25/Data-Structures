/*
30. Write a C programming to sort a given linked list by bubble sort. Go to the editor
Test Data and Expected Output : 5
15
33
49
6
65
Input number of elements in the linked list? Input the elements in the linked list:
Sorted order is:
6	15	33	49	65
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
void sortLinkedList(node *head) // code for sorting
{
    node *prev = (node *)malloc(sizeof(node *));
    node *ptr = (node *)malloc(sizeof(node *));
    prev = head;
    while (prev != NULL)
    {
        ptr = prev->next;
        while (ptr != NULL)
        {
            if (prev->data > ptr->data)
            {
                int temp = prev->data;
                prev->data = ptr->data;
                ptr->data = temp;
            }
            ptr = ptr->next;
        }
        prev = prev->next;
    }
}
void linkedListMaker()
{ // to insert data in l list
    int size;
    printf("Input the number of nodes : ");
    scanf("%d", &size);
    int data;
    node *new, *temp;
    head = (node *)malloc(sizeof(node *));
    temp = (node *)malloc(sizeof(node *));
    printf("Input data for nodes \n");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (int i = 0; i < size - 1; i++)
    {
        new = (node *)malloc(sizeof(node *));
        int data;
        scanf("%d", &data);
        new->data = data;
        new->next = NULL;
        temp->next = new;
        temp = temp->next;
    }
}
int main()
{
    linkedListMaker();
    printf("Before sorting \n");
    traverseLinkedList(head);
    printf("After sorting\n");
    sortLinkedList(head);
    traverseLinkedList(head);
    return 0;
}
