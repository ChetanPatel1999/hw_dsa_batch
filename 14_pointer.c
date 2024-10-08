// pointer types
// wild pointer
// null pointer
// void pointer
// dangling pointer
#include <stdio.h>
void main()
{
    int a = 12;
    char ch = 'R';
    float f = 34.56;
    void *ptr; // void pointer hold adress of any data type varaible
    ptr = &a;
    printf("value of a = %d\n", *((int*)ptr));
    ptr = &ch;
    printf("value of ch = %c\n", *((char*)ptr));
    ptr = &f;
    printf("value of ch = %f\n", *((float*)ptr));
}