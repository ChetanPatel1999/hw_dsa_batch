//wap to find max element index  from array.
#include <stdio.h>
void display(int arr[], int s)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < s; i++) // 2
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int maxindex(int arr[],int s)
{
    // 23 56 78 900 67
    int i,max=arr[0],p=1;
    for(i=0;i<s;i++)//5
    {
      if(max<arr[i])
      {
        max=arr[i];
        p=i+1;
      }
    }
    return p;
}
void main()
{
    int arr[5],i;
    printf("enter array element : ");
    for(i=0;i<5;i++)
    {
     scanf("%d",&arr[i]);
    }
    display(arr,5);
    printf("max element index : %d",maxindex(arr,5));
    
}
