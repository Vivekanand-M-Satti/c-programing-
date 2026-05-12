#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,c=0,b=0,a=1;
    while(i!=n)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;
        i++;

    }

}
