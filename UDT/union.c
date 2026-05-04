#include<stdio.h>
union mav
{
    int a;
    float b;
    char c;
};
int main()
{
    union mav m;
    m.a=9;
    m.b=91;
    m.c=90;
    m.a=99;
    printf("%d\n %f\n %d\n",m.a,m.b,m.c);
}