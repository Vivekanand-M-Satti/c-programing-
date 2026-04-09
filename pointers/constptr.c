#include<stdio.h>
int main()
{
    int *const ptr;
    int a=9;
    ptr=&a;
    printf("%d",*ptr);
    
}