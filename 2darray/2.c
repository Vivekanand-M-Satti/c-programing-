#include<stdio.h>
int main()
{
    int sum=0,min,a,b,s1=0,s2=0,s3=0;
    scanf("%d%d",&a,&b);
    int arr[a][b];//={10,20,30,40,50,60};
    sum=-3333;
    min=arr[0][0];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            s1=0;
            
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            // 
            if(i==s2)
            {
                s1+=arr[i][j];

            }
            s2++;
             printf("%d\n",s1);
        }
    }
    //printf(" the largest is %d\n",sum);
    //printf("the smallest is %d",min);
    printf("%d\n",s1);
    printf("%d",s2);
}