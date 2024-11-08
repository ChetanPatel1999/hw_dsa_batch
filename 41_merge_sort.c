// Insertion sort code
#include <stdio.h>
void display(int arr[], int size)
{
    int i;
    printf("display array element : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[],int low,int mid,int high)
{
  int i=low,j=mid+1,k=low,b[high+1];
  while(i<=mid && j<=high)
  {
    if(arr[i]<arr[j])
    {
        b[k]=arr[i];
        k++;
        i++;
    }
    else{
        b[k]=arr[j];
        k++;
        j++;
    }
  }
  while(i<=mid)
  {
    b[k]=arr[i];
    k++;
    i++;
  }
    while(j<=high)
  {
    b[k]=arr[j];
    k++;
    j++;
  }               
  for(i=low ;i<=high;i++)
  {
    arr[i]=b[i];
  }
}
//45, 56, 5, 15, 3, 34, 55, 700, 8, 12
void merge_sort(int arr[],int low,int high) 
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}
void main()
{
    int arr[] = {45, 56, 5, 15, 3, 34, 55, 700, 8, 12};
    printf("array display before sorting ...\n");
    display(arr, 10);
    merge_sort(arr,0,9);
    printf("array display after sorting ...\n");
    display(arr, 10);
}