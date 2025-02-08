// BFS alogorithem to visit graph node(vertice)
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
    struct queue ex_q;
    ex_q.front = -1;
    ex_q.rear = -1;
    ex_q.size = 100;
    ex_q.arr = (int *)malloc(ex_q.size * sizeof(int));

    int adjmat[][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
    };
    char city[][15] = {"ujjain", "mahu", "indore", "ratalam", "bhopal", "dewase", "pithampur"};
    int visited[] = {0, 0, 0, 0, 0, 0, 0};
    int i = 4, j;
    enqueue(&ex_q, i);
    visited[i] = 1;
    printf("%d ", i);
    while (!is_empty(&ex_q))
    {
        int node = dequeue(&ex_q);
        for (j = 0; j < 7; j++)
        {
            if (adjmat[node][j] == 1 && visited[j] == 0)
            {
                enqueue(&ex_q, j);
                visited[j] = 1;
                printf("%d ", j);
            }
        }
    }
}