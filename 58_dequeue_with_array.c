#include <stdio.h>
#include <stdlib.h>
struct dequeue
{
    int front;
    int rear;
    int size;
    int *arr;
};
int is_empty(struct dequeue *q)
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
int is_full(struct dequeue *q)
{
    if ((q->front == 0 && q->rear == q->size - 1) || q->front == q->rear + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue_front(struct dequeue *q, int num)
{
    if (is_full(q))
    {
        printf("dequeue is full \n");
    }
    else
    {
        if (q->front == -1 && q->rear == -1)
        {
            q->front = 0;
            q->rear = 0;
        }
        else if (q->front == 0)
        {
            q->front = q->size - 1;
        }
        else
        {
            q->front--;
        }
        q->arr[q->front] = num;
    }
}
void enqueue_rear(struct dequeue *q, int num)
{
    if (is_full(q))
    {
        printf("dequeue is full \n");
    }
    else
    {
        if (q->front == -1 && q->rear == -1)
        {
            q->front = 0;
            q->rear = 0;
        }
        else if (q->rear == q->size - 1)
        {
            q->rear = 0;
        }
        else
        {
            q->rear++;
        }
        q->arr[q->rear] = num;
    }
}
void display(struct dequeue *q)
{
    if (is_empty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        int i = q->front;
        printf("dequeue element are : ");
        while (i != q->rear)
        {
            printf("%d ", q->arr[i]);
            i = (i + 1) % q->size;
        }
        printf("%d\n", q->arr[i]);
    }
}
int dequeue_front(struct dequeue *q)
{
    int a = -1;
    if (is_empty(q))
    {
        printf("dequeue is empty \n");
        return a;
    }
    else
    {
        a = q->arr[q->front];
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else if (q->front == q->size - 1)
        {
            q->front = 0;
        }
        else
        {
            q->front++;
        }
        return a;
    }
}
int dequeue_rear(struct dequeue *q)
{
    int a = -1;
    if (is_empty(q))
    {
        printf("dequeue is empty \n");
        return a;
    }
    else
    {
        a = q->arr[q->rear];
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else if (q->rear == 0)
        {
            q->rear = q->size - 1;
        }
        else
        {
            q->rear--;
        }
        return a;
    }
}
void main()
{
    struct dequeue q;
    q.front = -1;
    q.rear = -1;
    q.size = 4;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue_front(&q, 12);
    enqueue_front(&q, 34);
    enqueue_rear(&q, 78);
    enqueue_rear(&q, 500);
    display(&q); // 34 12 78 500
    printf("%d element is deleted \n", dequeue_front(&q));
    printf("%d element is deleted \n", dequeue_front(&q));
    display(&q); // 78 500
    printf("%d element is deleted \n", dequeue_rear(&q));
    printf("%d element is deleted \n", dequeue_rear(&q));
    printf("%d element is deleted \n", dequeue_rear(&q));
}