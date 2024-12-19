#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int stack_top()
{
    return top->data;
}
int operater(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char ch)
{
    if(ch=='/' || ch =='*')
    {
        return 3;
    }
     if(ch=='+' || ch =='-')
    {
        return 2;
    }
    return 0;
}
char *infix_to_post(char infix[]) //"x-y/z-k*d"
{
    char *postfix = (char *)malloc(strlen(infix) * sizeof(char));
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (!operater(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (is_empty())
            {
                push(infix[i]);
                i++;
            }
            else
            {
                if (precedence(infix[i]) > precedence(stack_top()))
                {
                    push(infix[i]);
                    i++;
                }
                else
                {
                    postfix[j] = pop();
                    j++;
                }
            }
        }
    }
    while(!is_empty())
    {
       postfix[j]=pop();
       j++;
    }
    postfix[j]='\0';
    return postfix;
}
void main()
{
    char infix[] = "A*B+C*d";
    printf("infix = %s\n", infix);
    printf("postfix = %s", infix_to_post(infix));
}