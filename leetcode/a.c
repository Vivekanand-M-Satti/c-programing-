
#include<stdio.h>
int main()
{
    int size,target,i,j,a,b;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j)
            continue;
            else if(arr[i]+arr[j]==target)
            {
                a=i,b=j;
            }
        }
    }
    printf("[%d,%d]",a,b);
    

}
