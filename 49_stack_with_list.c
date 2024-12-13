#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int n)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        if (top == NULL)
        {
            printf("stack is full or memory is full  or memmory not allocate\n");
            return -1;
        }
        top->data = n;
        top->next = NULL;
    }
    else
    {
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        if (new == NULL)
        {
            printf("stack is full or memory is full  or memmory not allocate\n");
            return -1;
        }
        new->data = n;
        new->next = top;
        top = new;
    }
}
void display()
{
    if (top != NULL)
    {
        printf("stack element are : ");
        struct node *temp = top;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("stack is under flow we cant display them\n");
    }
}
int pop()
{
    if (top == NULL)
    {
        printf("stack is under flow we cant pop element\n");
    }
    else
    {
        struct node *temp = top;
        top = top->next;
        int n = temp->data;
        free(temp);
        return n;
    }
}
void main()
{
    push(12);
    push(78);
    display();
    push(500);
    push(1100);
    display();
    printf("%d element is pop \n", pop());
    display();
    printf("%d element is pop \n", pop());
    display();
    push(800);
    display();
}