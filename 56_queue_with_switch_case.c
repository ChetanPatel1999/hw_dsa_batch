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
        printf("Queue is full\n");
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
        printf("Queue is empty\n");
    }
    else
    {
        a = q->arr[q->front];
        q->front++;
    }
    return a;
}
void show(struct queue q)
{
    for (int i = q.front; i <= q.rear; i++)
    {
        printf("%d index element is :- %d\n", i, q.arr[i]);
    }
}

int main()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;
    while (1)
    {
        int s, i, j, ip, m;
        printf("Program to create queue\n");
        printf("Press 1 to create your queue\n");
        printf("Press 2 for showing the queue\n");
        printf("Press 100 to exit the program\n");
        scanf("%d", &s); 
        switch (s)
        {
        case 1:
            
            printf ("Press 1 for a custom Queue \nPress 2 for default Queue  \n");
            scanf("%d",&m);
            if(is_empty(&q))
            {
                if (m==1 ){
                    printf("Enter the size of the Queue :-\n");
                    scanf("%d", &q.size);
                    q.arr = (int *)malloc(q.size * sizeof(int));
                    i = q.size;
                    for (j = 0; j < i; j++)
                    {
                        printf("The %d element is(only integer) :-", j);
                        scanf("%d", &ip);
                        enqueue(&q, ip);
                    }
                    break;
                }
                else if (m==2 ){
                    q.size = 3;
                    q.arr = (int *)malloc(q.size * sizeof(int));
                    enqueue(&q, 12);
                    enqueue(&q, 34);
                    enqueue(&q, 56);
                    break;
                }
                else {
                    printf ("Enter a valid no(1,2)\n");
                    break;
                }
            }
            else {
                printf ("Your Que is full \nIf wanting to empty your Queue \nPress 1 else Press 0 ");
                scanf ("%d",&m);
                if (m==1){
                    free(q.arr);
                    q.front=-1;
                    q.rear=-1;
                  break;
                }
                else {
                    printf ("queue empty opeartion faild because Enter a unvalid nuber\n");
                    break;
                }
            }
        case 2:
            show(q);
            break;
        case 100:
            return 0;
        default:
            printf("Enter a valid number (1-3, 100)\n");
        } // switch
    }     // while
} // main
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue 
// Press 2 for default Queue
// 1
// Enter the size of the Queue :-
// 5
// The 0 element is(only integer) :-1
// The 1 element is(only integer) :-2
// The 2 element is(only integer) :-3
// The 3 element is(only integer) :-4
// The 4 element is(only integer) :-5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 2
// 0 element is :- 1
// 1 element is :- 2
// 2 element is :- 3
// 3 element is :- 4
// 4 element is :- 5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue 
// Press 2 for default Queue
// 1
// Your Que is full 
// If wanting to empty your Queue
// Press 1 else Press 0 1
// 0 element is :- 12921600
// 1 element is :- 12910784
// 2 element is :- 3
// 3 element is :- 4
// 4 element is :- 5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue 
// Press 2 for default Queue
// 1
// Your Que is full
// If wanting to empty your Queue
// Press 1 else Press 0 1
// 0 element is :- 12921600
// 1 element is :- 12910784
// 2 element is :- 3
// 3 element is :- 4
// 4 element is :- 5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue
// Press 2 for default Queue
// 1
// Your Que is full
// If wanting to empty your Queue
// Press 1 else Press 0 1
// 0 element is :- 12921600
// 1 element is :- 12910784
// 2 element is :- 3
// 3 element is :- 4
// 4 element is :- 5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue
// Press 2 for default Queue
// 1
// Your Que is full
// If wanting to empty your Queue
// Press 1 else Press 0 2
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// 1
// Press 1 for a custom Queue
// Press 2 for default Queue
// 2
// Your Que is full
// If wanting to empty your Queue
// Press 1 else Press 0 1
// 0 element is :- 12921600
// 1 element is :- 12910784
// 2 element is :- 3
// 3 element is :- 4
// 4 element is :- 5
// Program to create queue
// Press 1 to create your queue
// Press 2 for showing the queue
// Press 100 to exit the program
// -
