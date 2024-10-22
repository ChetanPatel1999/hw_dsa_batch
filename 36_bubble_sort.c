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
void bubble_sort(int arr[], int size) // 5
{
  int i,j,temp;
  //  0   1  2  3   4 
  // 45, 56, 5, 15, 3
  for(i=0;i<size-1;i++)//0    i<4
  {
    for(j=0;j<size-(i+1);j++)// 1   j<4
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }
}
void main()
{
    int arr[] = {45, 56, 5, 15, 3};
    printf("array display before sorting ...\n");
    display(arr, 5);
    bubble_sort(arr, 5);
    printf("array display after sorting ...\n");
    display(arr, 5);
}