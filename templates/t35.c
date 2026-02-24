#include<stdio.h>
int main ()
{
    int i,sum=0,avg=0;
    int marks[5];
    printf("enter the 5 elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%d\n",sum);
    printf("%d\n",avg);
}
