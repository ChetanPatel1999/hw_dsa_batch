//double pointer
#include<stdio.h>
void main()
{
  int a=12;
  int *ptr,**dptr;
  ptr=&a;
  dptr=&ptr;
  printf("a = %d\n&a= %d\nptr= %d\n*ptr= %d",a,&a,ptr,*ptr);
  printf("\n&ptr = %d\ndptr= %d\n*dptr= %d\n**dptr= %d",&ptr,dptr,*dptr,**dptr);
}