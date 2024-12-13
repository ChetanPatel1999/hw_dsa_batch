// stack with array
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int is_empty(struct stack *s1)
{
    if (s1->top == -1)
    {
        return 1;
    }
    return 0;
}
int is_full(struct stack *s1)
{
    if (s1->top == s1->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *s1, int n)
{
    if (is_full(s1))
    {
        printf("stack is overflow , we cant push elemnet\n");
    }
    else
    {
        s1->top++; // 1
        s1->arr[s1->top] = n;
    }
}
void display(struct stack *s1)
{
    if (is_empty(s1))
    {
        printf("stack is underflow we cant display them\n");
    }
    else
    {
        int i;
        printf("stack element are : ");
        for (i = 0; i <= s1->top; i++)
        {
            printf("%d ", s1->arr[i]);
        }
        printf("\n");
    }
}
int pop(struct stack *s1)
{
    if (is_empty(s1))
    {
        printf("stack is underflow , we cant pop element\n");
    }
    else
    {
        int val = s1->arr[s1->top];
        s1->top--;
        return val;
    }
}
int peek(struct stack *s1)
{
    if (is_empty(s1))
    {
        printf("stack is underflow , we cant peek element\n");
    }
    else
    {
        return s1->arr[s1->top];
    }
}
int count(struct stack *s1)
{
    return s1->top + 1;
}
void main()
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = 5;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    push(s1, 45);
    push(s1, 56);
    push(s1, 44);
    printf("total element count : %d\n", count(s1));
    push(s1, 66);
    push(s1, 77);
    printf("total element count : %d\n", count(s1));
    display(s1);
    printf("%d element is pop\n", pop(s1));
    printf("total element count : %d\n", count(s1));
    display(s1);
    printf("%d element is pop\n", pop(s1));
    display(s1);
    push(s1, 500);
    display(s1);
    printf("%d element is pop\n", pop(s1));
    display(s1);
    printf("peek elemen : %d\n", peek(s1));
    display(s1);
}