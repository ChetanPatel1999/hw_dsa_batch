// wap to count how many times  given element is present in array.
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
int elementcount(int arr[], int s, int val) // val=12
{
    // 12 34 12 55 67 12 9 34
    int i, c = 0;
    for (i = 0; i < s; i++) // 1
    {
        if (arr[i] == val)
        {
            c++;
        }
    }
    return c;
}
void main()
{
    int s;
    printf("enter array size : ");
    scanf("%d", &s);
    int arr[s], n, i;
    printf("enter array element : ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, s);

    printf("enter a elemenet : ");
    scanf("%d", &n);

    printf("%d times appear %d element", elementcount(arr, s, n), n);
}
