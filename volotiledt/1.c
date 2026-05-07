#include<stdio.h>

volatile int x = 1;

int main()
{
    while(x == 10)
    {
    }

    printf("x changed");
}