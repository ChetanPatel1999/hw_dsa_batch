// wap to search given element in array.
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
int elementfind(int arr[], int s, int val) // val=7
{
    // 12 34 222 55 67 8 9
    int i;
    for (i = 0; i < s; i++)
    {
        if (arr[i] == val)
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
    int arr[5], n, i;
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, 5);

    printf("enter a elemenet : ");
    scanf("%d", &n);

    if (elementfind(arr, 5, n))
    {
        printf("number is fond\n");
    }
    else
    {
        printf("number is not fond\n");
    }
}
