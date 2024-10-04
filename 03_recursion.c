//sum 1 to 10 using recursion.
#include<stdio.h>
int sum(int num)
{
   if(num==0)return 0;
   return num+sum(num-1);
}
void main()
{
  printf("%d ",sum(100));
}