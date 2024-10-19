#include <stdio.h>
int binary_search(int arr[], int size, int ele)
{
    int high = size - 1; // 8
    int low = 0;         // 0
    int mid;             //
    while (low <= high)  // 0<=0
    {
        mid = (low + high) / 2; // 0
        if (arr[mid] == ele)
        {
            return mid ;
        }
        if (ele > arr[mid])
        {
            low = mid+1;
        }
        if (ele < arr[mid])
        {
            high = mid - 1; // -1
        }
    }
    return -1;
}
void main()
{              // 0   1   2   3   4      5   6    7   8
    int arr[] = {12, 34, 56, 105, 134, 150, 222, 255, 800};
    int ele = 255;
    printf("binaray earch raesult = %d",binary_search(arr,9,ele));
}