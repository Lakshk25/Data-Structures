#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int top;
    int size;
    int *arr;
} stack;
stack *stackMaker(int size)
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = size;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->top = -1;
    return s;
}

int isEmpty(stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}
int isFull(stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    return 0;
}
int push(stack *s, int number)
{
    if (isFull(s))
        return 0;

    s->arr[s->top + 1] = number;
    s->top++;
}
int pop(stack *s)
{
    if (isEmpty(s))
        return 0;
    s->top--;
}
int stackTop(stack *s)
{
    int top = s->arr[s->top];
    if (isEmpty(s))
        return -1;
    return top;
}
void nearSmallerLeft(int arr[], int size)
{
    stack *s = stackMaker(100);
    int result[size];
    for (int i = 0; i < size; i++)
    {
        if (stackTop(s) < 0)
        {
            push(s, arr[i]);
            result[i] = -1;
        }
        if (stackTop(s) < arr[i])
        {
            result[i] = stackTop(s);
            push(s, arr[i]);
        }
        else if (stackTop(s) > arr[i])
        {
            while (stackTop(s) >= arr[i] && s->top > -1)
                pop(s);

            if (stackTop(s) < arr[i])
            {
                result[i] = stackTop(s);
                push(s, arr[i]);
            }
            else
            {
                result[i] = -1;
                push(s, arr[i]);
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d ", result[i]);
}
int main()
{
    int arr[] = {2, 4, 6, 8, 4, 3, 2, 4};
    int size = 8;
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Nearest smaller to left\n");
    nearSmallerLeft(arr, size);
    return 0;
}
