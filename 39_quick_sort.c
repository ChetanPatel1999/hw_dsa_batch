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
int partician(int arr[], int low, int high)
{
    int i, j, pivot, temp;
    pivot = arr[low];
    i = low + 1;
    j = high;
    do
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    while(i<j);
    temp=arr[j];
    arr[j]=pivot;
    arr[low]=temp;
    return j;
}
void quick_sort(int arr[], int low, int high) // 5
{
    int particianIndex;
    if (low < high)
    {
        particianIndex = partician(arr, low, high);
        display(arr,10);
        quick_sort(arr,low,particianIndex-1);
        quick_sort(arr,particianIndex+1,high);
    }
}
void main()
{
    int arr[] = {45, 56, 5, 15, 3, 34, 55, 700, 8, 12};
    printf("array display before sorting ...\n");
    display(arr, 10);
    quick_sort(arr, 0, 9);
    printf("array display after sorting ...\n");
    display(arr, 10);
}