#include <stdio.h>
int *cubesqure(int num)
{
  int cube = num * num * num;
  int sqr = num * num;
  static int arr[] = {cube, sqr};
  return arr;
}
int main()
{
  int *a = cubesqure(5);
  printf("%d \n", *a);
  a++;
  printf("%d ", *a);

  return 0;
}