// dyanamic memory allocation using malloc
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, i;
    int n;
    printf("enter size of dynamaic array : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("dynamicall memorry is not allocated");
    }
    else
    {
        printf("enter array element : ");
        for (i = 0; i < n; i++)//3
        {
            scanf("%d", &ptr[i]); // 404
        }
        printf("array element are : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }
        free(ptr);
    }
}