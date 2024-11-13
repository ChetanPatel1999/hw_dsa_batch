//simple linked list
#include<stdio.h>
struct node
{
   int data;
   struct node *next;
};
void main()
{
 struct node head;
 printf("%d ",sizeof(struct node));
}