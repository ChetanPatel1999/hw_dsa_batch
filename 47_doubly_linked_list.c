#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *new, *temp;
        head = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        head->data = num;
        head->prev = NULL;
        head->next = NULL;
        temp = head;
        while (1)
        {
            printf("you want add more element press 1 : ");
            scanf("%d", &num);
            if (num == 1)
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("enter a num : ");
                scanf("%d", &num);
                new->data = num;
                new->prev = temp;
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
        printf("linked list is alredy created\n");
    }
}
void display()
{
    if (head != NULL)
    {
        struct node *temp, *pre;
        temp = head;
        printf("list element are : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            pre = temp;
            temp = temp->next;
        }
        printf("\n");
        printf("reverse list : ");
        while (pre != NULL)
        {
            printf("%d ", pre->data);
            pre = pre->prev;
        }
        printf("\n");
    }
    else
    {
        printf("frist create list thtan display\n");
    }
}
void insert_at_frist()
{
    if (head != NULL)
    {
        int num;
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = head;
        new->prev = NULL;
        head->prev = new;
        head = new;
    }
    else
    {
        printf("frist create list thtan insert\n");
    }
}
void delete_at_frist()
{

    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        head = head->next;
        head->prev = NULL;
        printf("%d is deleted \n", temp->data);
        free(temp);
    }
    else
    {
        printf("frist create list than delete\n");
    }
}
void insert_at_last()
{
    if (head != NULL)
    {
        int num;
        struct node *new,*temp;
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        new->prev = NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
       
    }
    else
    {
        printf("frist create list than insert\n");
    }
}
void delete_at_last()
{

    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        printf("%d is deleted \n", temp->data);
        free(temp);
    
    }
    else
    {
        printf("frist create list than delete\n");
    }
}
void insert_at_index()
{
    if (head != NULL)
    {
        struct node *new, *temp;
        int index, c = 0, t, num;
        printf("enter index : ");
        scanf("%d", &index);
        if (index == 0)
        {
            insert_at_frist();
        }
        else
        {
            temp = head;
            while (temp != NULL)
            {
                c++;
                temp = temp->next;
            }
            if (index == c)
            {
                insert_at_last();
            }
            else if (index > c)
            {
                printf("please enter index less than %d\n", c + 1);
            }
            else
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("enter a num : ");
                scanf("%d", &num);
                new->data = num;
                new->next = NULL;
                new->prev = NULL;
                // index=2
                temp = head;
                t = 0;
                while (t < index)
                {
                    t++;
                    temp = temp->next;
                }
                new->prev=temp->prev;
                temp->prev=new;
                new->next=temp;
                new->prev->next=new;  
            }
        }
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
        printf("\nwelcome to doubley linked list program.....\n");
        printf("press 1 for create linked list \n");
        printf("press 2 for display linked list \n");
        printf("press 3 for insert at frist in list \n");
        printf("press 4 for delete at frist in list \n");
        printf("press 5 for insert at last  in list \n");
        printf("press 6 for delete at last  in list \n");
        printf("press 7 for insert at particuler index in list \n");
        // printf("press 8 for delete at particuler index in list \n");
        // printf("press 9 for search number in list \n");
        printf("press 10 for exit \n");
        printf("choose any option  : ");
        scanf("%d", &num); // 10
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
        case 6:
            delete_at_last();
            break;
        case 7:
            insert_at_index();
            break;
        // case 8:
        //     delete_at_index();
        //     break;
        // case 9:
        //     search();
        //     break;
        case 10:
            exit(0);
        default:
            printf("please chose write option\n");
        }
    }
}