// structure in c language
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen *p = (struct pen *)malloc(3 * sizeof(struct pen));
    struct pen *temp = p;
    int i, a;
    float b;
    char s[50];
    for (i = 0; i < 3; i++)
    {
        printf("enter p%d info : \n", i + 1);
        printf("enter pen name : ");
        scanf("%s", s);
        strcpy(p->name, s);
        printf("enter pen price : ");
        scanf("%d", &a);
        p->price = a;
        printf("enter pen rating : ");
        scanf("%f", &b);
        p->rating = b;
        p++;
    }
    p = temp;
    for (i = 0; i < 3; i++)
    {
        printf("p%d info :\n", i + 1);
        printf("name of pen : %s\n", p->name);
        printf("price of pen : %d\n", p->price);
        printf("rating of pen : %.2f\n", p->rating);
        printf("\n");
        p++;
    }
    p=temp;
    free(p);
}