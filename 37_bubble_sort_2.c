//optimise bubble sort code
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
    int i, j, temp,swap=1;
    //  0   1    2    3   4
    //  3,   15,   20,  45,  56
    for (i = 0; i < size - 1; i++) //4    i<4
    {
        for (j = 0; j < size - (i + 1); j++) //1   j<1
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];//56
                arr[j] = arr[j + 1];//15
                arr[j + 1] = temp;//56
                swap=0;
            }
        }
        if(swap==1)
        {
            break;
        }

    }

}
void main()
{
    int arr[] = {45, 56, 5, 15, 3,34,55,700,8,12};
    printf("array display before sorting ...\n");
    display(arr, 10);
    bubble_sort(arr, 10);
    printf("array display after sorting ...\n");
    display(arr, 10);
}