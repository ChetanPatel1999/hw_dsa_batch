#include <stdio.h>
void merging(int a1[], int a2[], int arr[], int s1, int s2)
{
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            k++;
            i++;
        }
        else
        {

            arr[k] = a2[j];
            k++;
            j++;
        }
    }
    while (i < s1)
    {
        arr[k] = a1[i];
        k++;
        i++;
    }
    while (j < s2)
    {
        arr[k] = a2[j];
        k++;
        j++;
    }
}
void main()
{
    int a1[] = {3, 5, 6, 78, 90};
    int a2[] = {12, 45, 200, 500, 600, 800};
    int arr[11], i;
    merging(a1, a2, arr, 5, 6);
    printf("display new array : ");
    for (i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }
}