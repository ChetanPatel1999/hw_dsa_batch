#include<stdio.h>
int* fun(int *v)
{
  return v;
}
int cubesqure(int num)
{
    int cube=num*num*num;
    int sqr=num*num;
    retrun sqr;
}
void main()
{
 int a=12;
 int *n=fun(&a);
 printf("%d",*n);
}