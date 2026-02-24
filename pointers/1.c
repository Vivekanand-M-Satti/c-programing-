
//----------------------------------------------------------16/02/2026----------------------------------------------------------------------------
/*#include<stdio.h>
int main()
{
int a=1;
 int *ptr1 =&a;
int b=2;
int *ptr2=&b;
int c=(*ptr1+*ptr2);
printf("%d\n",c);
}
#include<stdio.h>
int main()
{
    int a=90;
    char c='h';
    float f=8.9;
    double d=9.9999999;
    int*aa=&a;
    char*ch =&c;
    float*fl=&f;
    double*db=&d;
    printf("%c %p",*ch,ch);
     printf("%f  %p",*fl,fl);

}*/
// #include<stdio.h>
// int main()
// {
//     int a=9,c=90;
//     int *o , *b;
//     o=&a;
//     o=99;
//     *b=a;
//     printf("%d ",o);
//     printf("%d",*o);
//     printf("%d",*b);
    
// }
// #include<stdio.h>
// int main()
// {
//     int a[]={1,3,4,5,5,6};
//     int *p=a;
//     int *w=&a[3];
//     int b=p-w;
//     printf("%d \n %d\n",*p,b);
// }
// #include<stdio.h>

// int main()
// {
//     int a[]={0,1,-1,10,11};
//     int *p,*q;
//     p=a;
//     q=&a[4];
//     int d=p-q;
//     printf("d=%d\n",d);
//     *q=25;
//      printf("*q=%d\n",*q);
//      d=q-p;
//       printf("d=%d\n",d);
//       *p=27;
//        printf("*p=%d\n",*p);
//         printf("p=%d",p);
//        p=p+3;
//         printf("p=%d\n",p);
//         d=p-q;
//          printf("d=%d\n",d);
// }
// #include<stdio.h>

// int main()
// {
//     int a[]={0,1,-1,10,11};
//     int *p=a;
//     printf("%d\n%d\n%d\n,%d\n%d\n",*p,*p++,*p++,(*p)++,*p--);//undefined behaviour with multiple pointer modifications in one printf.
// }
#include<stdio.h>
int main()
{
    int a[]={1,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d\n%d\n%d\n",(*p)++,*p++,*++p);
}