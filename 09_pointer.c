// wap to take array element from user and display their sum.
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr, i;
    ptr = &arr[0]; // 400
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr=arr; // 416
    //sum array elemet 
    int sum=0;
    for (i = 0; i < 5; i++) // 5
    {
       sum=sum + *ptr;
       ptr++;
    }
    printf("sum = %d ",sum);
}