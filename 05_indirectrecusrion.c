// indiract recursion
#include <stdio.h>
void fun2();
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d  ", n);
        fun2(n - 1);
    }
}
void fun2(int n)
{
   if(n>1)
   {
    printf("%d ",n);
    fun1(n/2);
   }
}
void main()
{
    fun1(20);
}