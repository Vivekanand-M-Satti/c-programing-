#if 0
#include<stdio.h>
int add (int a,int b)
{
    return a+b;
}
int sub (int a,int b)
{
    return a-b;
}
int op(int (*fun)(int ,int ),int a,int b)
{
    return fun(a,b);

}
int main()
{
    int a=9,b=7;
    int (*fun)(int ,int );
    fun=add;
    printf("%d\n",op(fun,a,b));
    fun=sub;
    printf("%d",op(fun,a,b));
}
#endif
#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int rem(int a,int b)
{
    return a%b;
}
int div(int a,int b)
{
    return a/b;
}
int main()
{
    int (*fun[4])(int , int);
    fun[0]=sum;
    fun[1]=sub;
    fun[2]=rem;
    int a=8,b=9;
    fun[3]=div;
    for(int i=0;i<4;i++)
    {
        printf("%d\n",fun[i](a,b));
    }

}
