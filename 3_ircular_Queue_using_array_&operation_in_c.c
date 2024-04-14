Implement a circular  Queue using array and operation enqueue,dequeue,isfull,isempty in C (Explain in copy also) 

// https://www.youtube.com/watch?v=KqTJ5MAUj80&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=42&pp=iAQB 
// https://www.youtube.com/watch?v=rtxjrVpWVmI&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=43&pp=iAQB 
// https://www.youtube.com/watch?v=lQBRjdPFF4w&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=44&pp=iAQB 
// see video to understand you can see copy also 

#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if ((q->r + 1) % q->size == q->f)
    {
        printf("This Queue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (q->r == q->f)
    {
        printf("This Queue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
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
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

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
