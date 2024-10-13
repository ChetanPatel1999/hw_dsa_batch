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
    struct pen *ptr = (struct pen *)malloc(3 * sizeof(struct pen));
    struct pen *temp = ptr;
    strcpy(ptr->name, "cello");
    ptr->price = 5;
    ptr->rating = 3.4;
    ptr++; // 123476
    strcpy(ptr->name, "goldex");
    ptr->price = 10;
    ptr->rating = 4.5;
    ptr++; // 123496
    strcpy(ptr->name, "pentoic");
    ptr->price = 15;
    ptr->rating = 4.5;
    int i;
    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        printf("p1 info :\n");
        printf("name of pen : %s\n", ptr->name);
        printf("price of pen : %d\n", ptr->price);
        printf("rating of pen : %.2f\n", ptr->rating);
        ptr++;
    }
    ptr=temp;
    free(ptr);
}