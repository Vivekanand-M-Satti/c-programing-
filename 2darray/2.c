#include<stdio.h>
int main()
{
    int sum=0,min;
    //scanf("%d%d",&a,&b);
    int arr[2][3]={10,20,30,40,50,60};
    sum=arr[0][0];
    min=arr[0][0];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(arr[i][j]>sum)
            {
                sum=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf(" the largest is %d\n",sum);
    printf("the smallest is %d",min);
}