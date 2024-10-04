//make a power fuctio
#include<stdio.h>
int power(int n,int p)
{
  if(p==0)return 1;
  return n*power(n,p-1);
}
void main()
{
printf("%d",power(6,2));
}