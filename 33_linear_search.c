#include<stdio.h>
int linear_search(int arr[],int size,int ele)
{
    int i;
    for(i=0;i<size;i++)//5
    {
        if(ele==arr[i])
        {
          return 1;
        }
    }
     return 0;
}
void main()
{
 int arr[]={12,34,56,78,90};
 int ele=34;
 if(linear_search(arr,5,ele))
 {
    printf("element is fond");
 }
 else{
    printf("element is not fond");
 }
}