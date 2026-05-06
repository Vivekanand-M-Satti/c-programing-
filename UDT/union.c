#include<stdio.h>
#if 0
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
    #endif
    union mav
{
    char o;
    int i;
    double h;
};
int main()
{
    union mav m;
    m.h=7.2;
    m.i=0x1234;
    m.o='1';
    printf("%lf\n %d\n %c\n",m.h,m.i,m.o);
}