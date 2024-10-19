#include<stdio.h>
int linear_search(int arr[],int size,int ele)
{
    int i;
    for(i=0;i<size;i++)//2
    {
        if(ele==arr[i])
        {
          return i+1;
        }
    }
     return 0;
}
void main()
{
 int arr[]={500,790,12,346,56,78,90};//7=7 N
 int ele=34;
 if(linear_search(arr,7,ele))
 {
    printf("element is fond");
 }
 else{
    printf("element is not fond");
 }
}