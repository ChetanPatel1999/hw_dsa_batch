// simple circuler linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display1()
{
    struct node *temp;
    temp = head;
    printf("linked list element : ");
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}
void display2()
{
    struct node *temp;
    temp = head;
    printf("linked list element : ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
     while (temp != head);
}
void main()
{
    struct node *second, *third, *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->next = second;
    second->data = 34;
    second->next = third;
    third->data = 56;
    third->next = fourth;
    fourth->data = 78;
    fourth->next = head;
    display2();
}
