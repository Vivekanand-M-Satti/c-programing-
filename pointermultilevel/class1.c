// #include<stdio.h>
// int main()
// {
//     int num=10;
//     int *ptr1=&num;
//     int **ptr2=&ptr1;
//     int ***ptr3=&ptr2;

//     printf("%p\n",&ptr3);
//     printf("%p\n",ptr3);
//     printf("%p\n",*ptr3);
//     printf("%p\n",**ptr3);
//     printf("%d\n",***ptr3);
// }
#include<stdio.h>
int main(int argc,char *argv[],char *envn[])
{
    for(int i=0;envn[i];i++)
    {
        printf("%s",envn[i]);
    }
    
}