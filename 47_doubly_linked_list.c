#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void   create_list()
{

}
void display()
{

}
void main()
{

    int num;
    while (1)
    {
        printf("\nwelcome to doubley linked list program.....\n");
        printf("press 1 for create linked list \n");
        printf("press 2 for display linked list \n");
        // printf("press 3 for insert at frist in list \n");
        // printf("press 4 for delete at frist in list \n");
        // printf("press 5 for insert at last  in list \n");
        // printf("press 6 for delete at last  in list \n");
        // printf("press 7 for insert at particuler index in list \n");
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
        // case 3:
        //     insert_at_frist();
        //     break;
        // case 4:
        //     delete_at_frist();
        //     break;
        // case 5:
        //     insert_at_last();
        //     break;
        // case 6:
        //     delete_at_last();
        //     break;
        // case 7:
        //     insert_at_index();
        //     break;
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