 Implement a Queue using array and operation enqueue,dequeue,isfull,isempty in C (Explain in copy also) 
// https://www.youtube.com/watch?v=EyxBMLZdgvc&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=39&pp=iAQB 
// https://www.youtube.com/watch?v=JlZX7xIBjl0&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=40&pp=iAQB 
// https://www.youtube.com/watch?v=FuQdtKry3ss&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=41&pp=iAQB 
// see all video and you can see copy also 

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (q->r == q->size - 1)
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (q->r == q->f)
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("Queue is full\n");
    }

    return 0;
}
