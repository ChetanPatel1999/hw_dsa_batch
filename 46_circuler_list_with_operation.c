// circuler linked list with all operation
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    if (head != NULL)
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
        printf("\n");
    }
    else
    {
        printf("circuler list is not created\n");
    }
}
void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *temp, *new;
        head = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num); // 12
        head->data = num;
        head->next = head;
        temp = head; // 1200
        while (1)
        {
            printf("you want to add more element press 1 :");
            scanf("%d", &num); // 1
            if (num == 1)
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("enter a num : ");
                scanf("%d", &num);
                new->data = num;
                new->next = head;
                temp->next = new;
                temp = new; // 5600
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
void insert_at_frist()
{
    if (head != NULL)
    {
        struct node *new, *temp;
        int num;
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        temp = head; // 1200
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
        head = new;
    }
    else
    {
        printf("circuler list is not created so you not insert\n");
    }
}
void delete_at_frist()
{
    if (head != NULL)
    {
        struct node *temp, *del;
        del = head;
        temp = head; // 1200
        while (temp->next != head)
        {
            temp = temp->next;
        }
        // temp //3400
        head = head->next; // 900
        temp->next = head;
        printf("%d is deleted \n", del->data);
        free(del);
    }
    else
    {
        printf("frist create linked list than delete\n");
    }
}
void insert_at_last()
{
    if (head != NULL)
    {
        struct node *new, *temp;
        int num;
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        // temp // 3400
        temp->next = new;
        new->next = head;
    }
    else
    {
        printf("frist create linked list than insert\n");
    }
}
void delete_at_last()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        printf("%d is deleted\n", temp->next->data);
        free(temp->next);
        temp->next = head;
    }
    else
    {
        printf("frist create linked list than delete\n");
    }
}
void insert_at_index()
{
    if (head != NULL)
    {
        struct node *new, *temp, *prev;
        int index, c, t, num;
        printf("enter index : ");
        scanf("%d", &index);
        if (index == 0)
        {
            insert_at_frist();
        }
        else
        {
            temp = head; // 1200
            c = 1;
            while (temp->next != head)
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
                // index=2
                temp = head;
                t = 0;
                while (t < index) // 1<2
                {
                    t++;               // 2
                    prev = temp;       // 900
                    temp = temp->next; // 5600
                }
                prev->next = new;
                new->next = temp;
            }
        }
    }
    else
    {
        printf("frist create list than insert\n");
    }
}
void delete_at_index()
{
    if (head != NULL)
    {
        int index, c, t;
        struct node *temp, *prev;
        printf("enter index : ");
        scanf("%d", &index);
        if (index == 1)
        {
            delete_at_frist();
        }
        else
        {
            c = 1;
            temp = head;
            while (temp->next != head)
            {
                c++;
                temp = temp->next;
            }
            if (index == c)
            {
                delete_at_last();
            }
            else if (index > c)
            {
                printf("please enter index less than %d\n", c + 1);
            }
            else
            {
                t = 1;
                temp = head;
                while (t < index)
                {
                    t++;
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = temp->next;
                printf("%d element is deleted \n", temp->data);
                free(temp);
            }
        }
    }
    else
    {
        printf("frist create list than delete\n");
    }
}
void search()
{
    if (head != NULL)
    {
        int num, f = 0;
        struct node *temp;
        printf("enter a num for search : ");
        scanf("%d", &num);
        temp = head;
        do
        {
            if (temp->data == num)
            {
                f = 1;
                break;
            }
            temp = temp->next;
        } while (temp!= head);
        if (f == 1)
        {
            printf("element is find\n");
        }
        else
        {
            printf("element is not find\n");
        }
    }
    else
    {
        printf("frist create linked list than search\n");
    }
}
void main()
{
    int num;
    while (1)
    {
        printf("\nwelcome to Circuler linked list program.....\n");
        printf("press 1 for create linked list \n");
        printf("press 2 for display linked list \n");
        printf("press 3 for insert at frist in list \n");
        printf("press 4 for delete at frist in list \n");
        printf("press 5 for insert at last  in list \n");
        printf("press 6 for delete at last  in list \n");
        printf("press 7 for insert at particuler index in list \n");
        printf("press 8 for delete at particuler index in list \n");
        printf("press 9 for search number in list \n");
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
        case 8:
            delete_at_index();
            break;
        case 9:
            search();
            break;
        case 10:
            exit(0);
        default:
            printf("please chose write option\n");
        }
    }
}