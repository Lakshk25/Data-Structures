#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void traverseLinkedList(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}
node *insertionAtFirst(node *head, int data)
{
    node *new = (node *)malloc(sizeof(node *));
    new->data = data;
    new->next = head;
    return new;
}
node *insertionAtLast(node *head, int data)
{
    node *new = (node *)malloc(sizeof(node *));
    node *p = (node *)malloc(sizeof(node *));
    new = head;
    while (new->next != NULL)
        new = new->next;
    new->next = p;
    p->next = NULL;
    p->data = data;
    return head;
}

node *insertionAtIndex(node *head, int index, int data)
{
    node *new = (node *)malloc(sizeof(node *));
    node *p = (node *)malloc(sizeof(node *));
    new = head;
    for (int i = 0; i < index - 1; i++)
    {
        new = new->next;
    }
    p->next = new->next;
    new->next = p;
    p->data = data;
    return head;
}

node *insertionAfterNode(node *head, node *after, int data)
{
    node *new = (node *)malloc(sizeof(node *));
    new->next = after->next;
    after->next = new;
    new->data = data;

    return head;
}
int main()
{
    node *head, *second, *third;
    head = (node *)malloc(sizeof(node *));
    second = (node *)malloc(sizeof(node *));
    third = (node *)malloc(sizeof(node *));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    traverseLinkedList(head);
    printf("after\n");
    int data = 4;
    // head = insertionAtFirst(head, data);
    // head = insertionAtLast(head, data);
    int index = 3;
    head = insertionAtIndex(head, index , data);
    // head = insertionAfterNode(head, second, data);
    traverseLinkedList(head);
    return 0;
}
