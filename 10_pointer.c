// wap to take array element from user and print only even number.
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
    printf("only even number : ");
    for (i = 0; i < 5; i++) // 5
    {
      if(*ptr%2==0)
      {
        printf("%d ",*ptr);
      }
      ptr++;
    }
}