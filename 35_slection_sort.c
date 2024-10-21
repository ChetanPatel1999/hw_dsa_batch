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
void selection_sort(int arr[], int size) // 5
{
    int i, j, minindex, temp;
    // 0  1  2      3   4
    // 3 ,5 ,15 ,   45  56
    for (i = 0; i < size - 1; i++) // 4
    {
        minindex = i;                  // 3
                                       // 5
        for (j = i + 1; j < size; j++) // j= 5
        {
            // 56         45
            if (arr[minindex] > arr[j])
            {
                minindex = j; // 4
            }
        }
        temp = arr[i];          // 56
        arr[i] = arr[minindex]; // 45
        arr[minindex] = temp;   // 56
    }
}
void main()
{
    int arr[] = {45, 56, 5, 15, 3};
    printf("array display before sorting ...\n");
    display(arr, 5);
    selection_sort(arr, 5);
    printf("array display after sorting ...\n");
    display(arr, 5);
}