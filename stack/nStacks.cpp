#include <iostream>
using namespace std;
class nStacks
{
    int *arr;
    int *next;
    int *top;
    int free;

public:
    nStacks(int size, int stacks)
    {
        arr = new int[size];
        next = new int[size];
        top = new int[stacks];
        for (int i = 0; i < size; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
        for (int i = 0; i < stacks; i++)
        {
            top[i] = -1;
        }
        free = 0;
    }
    bool isEmpty(int i)
    {
        if (top[i] == -1)
        {
            return 1;
        }
        return 0;
    }
    bool isFull(int i)
    {
        if (free == -1)
        {
            return 1;
        }
        return 0;
    }
    int push(int elem, int stack)
    {
        if (isFull(stack))
        {
            cout << "stack is Full" << endl;
            return 0;
        }
        int index = free;
        free = next[index];
        next[index] = top[stack];
        top[stack] = index;
        arr[index] = elem;
    }
    int pop(int stack)
    {
        if (isEmpty(stack))
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        int i = top[stack];
        top[stack] = next[i];
        next[i] = free;
        free = i;
        return arr[i];
    }
};
int main()
{
    nStacks s(5, 3);
    s.push(1, 0);
    s.push(3, 0);
    s.push(4, 1);
    s.push(8, 2);
    s.push(7, 1);
    s.push(9, 1);
    cout << s.pop(1) << endl;
    cout << s.pop(0) << endl;
    cout << s.pop(0) << endl;
    cout << s.pop(0) << endl;
    // cout << s.pop(1);
    // s.push(4,1);
    // cout << s.pop(1);
    // cout << s.pop(1);

    return 0;
}
