#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
struct node *top = NULL;
int is_empty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
void push(char n)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        if (top == NULL)
        {
            printf("stack is full or memory is full  or memmory not allocate\n");
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
        }
        new->data = n;
        new->next = top;
        top = new;
    }
}
char pop()
{
    if (top == NULL)
    {
        printf("stack is under flow we cant pop element\n");
    }
    else
    {
        struct node *temp = top;
        top = top->next;
        char n = temp->data;
        free(temp);
        return n;
    }
}
int perenthese_match(char exp[]) //")((12+5)(56+9))"
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (is_empty())
            {
                return 0;
            }
            pop();
        }
    }
    if (is_empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    char exp[30] = "(((12+5)(56+9)))";
    if (perenthese_match(exp))
    {
        printf("perenthese is matched");
    }
    else
    {
        printf("perenthese is not matched");
    }
}