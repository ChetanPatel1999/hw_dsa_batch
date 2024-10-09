#include <stdio.h>
void main()
{
    int arr[5];
    int i;
    *arr = 45;
    *(arr + 1) = 78;
    *(arr + 2) = 89;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }
}