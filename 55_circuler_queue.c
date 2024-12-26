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
    if (q->front == -1)
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
    if ((q->rear + 1) % q->size == q->front)
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
            q->rear = (q->rear + 1) % q->size;
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
        return a;
    }
    else
    {
        a = q->arr[q->front]; // 67
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {
            q->front = (q->front + 1) % q->size;
        }
        return a;
    }
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
    enqueue(&q, 400);
    enqueue(&q, 455);
    enqueue(&q, 555);
    printf("%d element is dequeue\n", dequeue(&q));
    printf("%d element is dequeue\n", dequeue(&q));
    enqueue(&q,900);
}