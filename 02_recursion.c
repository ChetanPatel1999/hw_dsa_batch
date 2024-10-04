//print reverse number.
#include<stdio.h>
void fun(int n)//0
{
    if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}
void main()
{
 fun(10);
}

