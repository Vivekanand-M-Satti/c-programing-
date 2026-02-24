#include<stdio.h>
int main()
{
    int a=8;
    int *h=&a;
    int **j=&h;
    int ***k=&j;

    **k=90;
    printf("%d\n",&a);
    printf("%d\n",h);
    printf("%d\n",*j);
    printf("%d\n",j);
    printf("%d\n",**j);
    printf("%d\n",***k);
      printf("%d\n",**k);
}