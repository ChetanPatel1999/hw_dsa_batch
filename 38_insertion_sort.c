//Insertion sort code
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
void insertion_sort(int arr[], int size) // 5
{
    int i,j,key;
    //12 34 56 78 90 99 678 ;
    for(i=0;i<size;i++)//3
    {
        key=arr[i];//56
        j=i-1;//1
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;//0
        }
        arr[j+1]=key;

    }

}
void main()
{
    int arr[] = {45, 56, 5, 15, 3,34,55,700,8,12};
    printf("array display before sorting ...\n");
    display(arr, 10);
    insertion_sort(arr, 10);
    printf("array display after sorting ...\n");
    display(arr, 10);
}