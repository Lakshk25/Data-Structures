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
node *deleteAtFirst(node *head)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr = head;
    ptr = head->next;
    free(head);
    return ptr;
}
node *deleteAtLast(node *head)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *p = (node *)malloc(sizeof(node *));
    ptr = head;
    p = ptr->next;
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    return head;
}
node *deleteAtIndex(node *head, int index)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *p = (node *)malloc(sizeof(node *));
    ptr = head;
    p = ptr->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next = p->next;
    return head;
}
node *deleteByNumber(node *head, int number)
{
    node *ptr = (node *)malloc(sizeof(node *));
    node *p = (node *)malloc(sizeof(node *));
    ptr = head;
    p = ptr->next;
    while (p->data != number && p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    if (p->data == number)
        ptr->next = p->next;
    return head;
}
int main()
{
    node *head, *second, *third, *four;
    head = (node *)malloc(sizeof(node *));
    second = (node *)malloc(sizeof(node *));
    third = (node *)malloc(sizeof(node *));
    four = (node *)malloc(sizeof(node *));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = four;

    four->data = 4;
    four->next = NULL;
    traverseLinkedList(head);
    printf("after\n");
    // head = deleteAtFirst(head);
    // head = deleteAtLast(head);
    // head = deleteAtIndex(head , 2);
    head = deleteByNumber(head, 4);
    traverseLinkedList(head);
    return 0;
}
