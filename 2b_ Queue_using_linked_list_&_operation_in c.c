Implement a Queue using linked list and operation enqueue,dequeue,isfull,isempty in C (Explain in copy also) 

// https://www.youtube.com/watch?v=LwYQo8mVPBs&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=45&pp=iAQB 
// https://www.youtube.com/watch?v=OnlgK0gjtB8&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=47&pp=iAQB 
// see both video to understand you can see copy also 

#include <stdio.h>
#include <stdlib.h>

// we create global pointer of front(*f) and rear(*r) bcoz when we declare these as local pointer in main function
// and use these pointer in enqueue & dequeue function then we use copy of these pointer there is no change in
// original pointer so we declare these globally
struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());

    linkedListTraversal(f);
    return 0;
}
