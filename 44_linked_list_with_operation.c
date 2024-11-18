// linked list with all operation
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *temp, *new;
        head = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL;
        temp = head;
        while (1)
        {
            printf("you want to add more element press 1 :");
            scanf("%d", &num); // 7
            if (num == 1)
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("enter a num : ");
                scanf("%d", &num);
                new->data = num;
                new->next = NULL;
                temp->next = new;
                temp = new;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("linked list is alreaddy created\n");
    }
}
void display()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        printf("linked list element : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("linked list is not cretated\n");
    }
}
void insert_at_frist()
{
    if (head != NULL)
    {
        int num;
        struct node *new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = head;
        head = new;
    }
    else
    {
        printf("frist create linked list after that insert \n");
    }
}
void delete_at_frist()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        head = head->next;
        printf("%d is deleted\n", temp->data);
        free(temp);
    }
    else
    {
        printf("please frist creat list after delete\n");
    }
}
void insert_at_last()
{
    if (head != NULL)
    {
        int num;
        struct node * temp;
        struct node *new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data=num;
        new->next=NULL;
        temp=head;
        while(temp->next!= NULL)
        {
           temp=temp->next; 
        }
        temp->next=new;
    }
    else
    {
        printf("frist create list than insert\n");
    }
}
void main()
{
    int num;
    while (1)
    {
        printf("\nwelcome to linked list program.....\n");
        printf("press 1 for create linked list \n");
        printf("press 2 for display linked list \n");
        printf("press 3 for insert at frist in list \n");
        printf("press 4 for delete at frist in list \n");
        printf("press 5 for insert at last  in list \n");
        printf("press 10 for exit \n");
        printf("choose any option  : ");
        scanf("%d", &num);
        printf("\n");
        switch (num)
        {
        case 1:
            create_list();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_at_frist();
            break;
        case 4:
            delete_at_frist();
            break;
        case 5:
            insert_at_last();
            break;
        case 10:
            exit(0);
        default:
            printf("please chose write option\n");
        }
    }
}