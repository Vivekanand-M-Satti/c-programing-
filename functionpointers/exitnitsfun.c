#include<stdio.h>
#include<stdlib.h>
void v(void);
void vi(void);
void viv(void);
int main()
{
    atexit(v);
    atexit(vi);
    atexit(viv);
    printf("in main\n");
}
void v(void)
{
    printf("hat bai");
}
void vi(void)
{
    printf("hat baiiii");
}void viv(void)
{
    printf("hat bai boy\n");
}