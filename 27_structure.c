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
    strcpy(ptr[0].name, "cello");
    ptr[0].price = 5;
    ptr[0].rating = 3.4;
    strcpy(ptr[1].name, "goldex");
    ptr[1].price = 10;
    ptr[1].rating = 4.5;
    strcpy(ptr[2].name, "pentoic");
    ptr[2].price = 15;
    ptr[2].rating = 4.5;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("p1 info :\n");
        printf("name of pen : %s\n", ptr[i].name);
        printf("price of pen : %d\n", ptr[i].price);
        printf("rating of pen : %.2f\n", ptr[i].rating);
    }
}