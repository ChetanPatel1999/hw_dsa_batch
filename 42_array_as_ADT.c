// array as ADT
#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int t_size;
    int u_size;
    int *ptr;
};
void createarray(struct myarray *arr, int t, int s)
{
    arr->t_size = t;
    arr->u_size = s;
    arr->ptr = (int *)malloc(t * sizeof(int));
}
void setvalue(struct myarray *arr)
{
    int i;
    int *temp = arr->ptr;
    for (i = 0; i < arr->u_size; i++)
    {
        scanf("%d", arr->ptr); // 400
        arr->ptr++;
    }
    arr->ptr = temp;
}
void dipslay(struct myarray *arr)
{
    int i;
    int *temp = arr->ptr;
    printf("array element are : ");
    for (i = 0; i < arr->u_size; i++)
    {
        printf("%d ", *(arr->ptr)); // 400
        arr->ptr++;
    }
    printf("\n");
    arr->ptr = temp;
}
void main()
{
    struct myarray arr;
    createarray(&arr, 8, 5);
    setvalue(&arr);
    dipslay(&arr);
}