// array as ADT
#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int t_size;
    int u_size;
    int *ptr;
};
void createarray(struct myarray *a, int t, int s)
{
    a->t_size = t;
    a->u_size = s;
    a->ptr = (int *)malloc(t * sizeof(int));
}
void setvalue(struct myarray *a)
{
    int i;
    printf("enter array element : ");
    for (i = 0; i < a->u_size; i++) // 1
    {
        scanf("%d", &a->ptr[i]);
    }
}
void dipslay(struct myarray *a)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < a->u_size; i++) // 5
    {
        printf("%d ", a->ptr[i]); //
    }
    printf("\n");
}
void insert_last(struct myarray *a, int val)
{
    if (a->u_size < a->t_size)
    {
        a->ptr[a->u_size] = val;
        a->u_size++; // 8
    }
    else
    {
        printf("array adts is full\n");
    }
}
void delete_last(struct myarray *a)
{
    if (a->u_size > 0)
    {
        a->u_size--; // 4
    }
    else
    {
        printf("array adts is empty\n");
    }
}
void insert_at_index(struct myarray *a, int index, int val)
{
    int i;
    if (a->u_size < a->t_size)
    {
        for (i = a->u_size - 1; i >= index; i--) // 1
        {
            a->ptr[i + 1] = a->ptr[i];
        }
        a->ptr[index] = val;
        a->u_size++;
    }
    else
    {
        printf("array adts is full\n");
    }
}
void delete_at_index(struct myarray *a, int index)
{
    int i;
    if (a->u_size >= 0)
    {
        //12 56 78 90 90
        for (i = index; i < ((a->u_size)-1); i++)//4
        {
            a->ptr[i]  =  a->ptr[i+1];
        }
        a->u_size --;
    }
    else
    {
        printf("array adts is empty");
    }
}
int search(struct myarray *a, int s)
{
   int i;
   for(i=0;i<a->u_size;i++)
   {
    if(a->ptr[i]==s)
    {
        return 1;
    }
   }
   return 0;
}
void main()
{
    struct myarray arr;
    createarray(&arr, 8, 5);
    setvalue(&arr); // 12 34 56 78 90
    dipslay(&arr);  // 12 34 56 78 90
    if(search(&arr,78))
    {
        printf("elment is find");
    }
    else{
        printf("element is not find");
    }
    printf("\n");
    struct myarray marks;
    createarray(&marks,10,5);
    setvalue(&marks);
    dipslay(&marks);
}