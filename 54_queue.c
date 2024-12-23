// simpel queue/ lienar queue
#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};
int is_empty(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full(struct queue *q)
{
    if (q->rear == (q->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int num)
{
    if (is_full(q))
    {
        printf("queue is full\n");
    }
    else
    {
        if (q->front == -1 && q->rear == -1)
        {
            q->front = 0;
            q->rear = 0;
        }
        else
        {
            q->rear++;
        }
        q->arr[q->rear] = num;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (is_empty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        a = q->arr[q->front];
        q->front++;
    }
    return a;
}
void main()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 3;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 34);
    enqueue(&q, 56);
    enqueue(&q, 500);
    printf("%d element is dequeue\n", dequeue(&q));
    printf("%d element is dequeue\n", dequeue(&q));
    printf("%d element is dequeue\n", dequeue(&q));
    printf("%d element is dequeue\n", dequeue(&q));
    enqueue(&q, 100);

    // if (is_empty(&q))
    // {
    //     printf("queue is empty");
    // }
    //  if (is_full(&q))
    // {
    //     printf("queue is full");
    // }
}