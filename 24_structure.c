// structure in c language
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[12];
    int price;
    float rating;
};
void main()
{
    struct pen p1;
    struct pen *ptr = &p1;
    strcpy((*ptr).name, "cello");
    (*ptr).price = 5;
    (*ptr).rating = 3.4;

    printf("p1 info :\n");
    printf("name of pen : %s\n", (*ptr).name);
    printf("price of pen : %d\n", (*ptr).price);
    printf("rating of pen : %.2f\n", (*ptr).rating);
}