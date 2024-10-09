#include <stdio.h>
void fun(int *v)
{
    printf("value of v : %d\n",*v);//12
    *v = 78;
    printf("value of v : %d\n",*v);//78
}
void main()
{
    int a = 12;
    printf("value of a := %d\n", a);//12
    fun(&a);//call by reference/address
    printf("value of a := %d\n", a);//78
}