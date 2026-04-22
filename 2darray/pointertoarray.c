#include<stdio.h>
#if 0
int main()
{
    int arr[3]={10,20,30};
    int *p1=arr;
    int (*p2) [3]=&arr;

    p1=arr;
    p2=&arr;
    printf("%d\n",*p2[0]);
    printf("%d\n",p2[0][1]);//*(*p1+0)
    printf("%d\n",p2[0][2]);//*(*p2+1)
    printf("%zu\n",sizeof(p1));//*(*p2+2)
    printf("%d\n",p1[0]);
    printf("%d\n",p1[1]);
    printf("%d\n",p1[2]);
}
    #endif
    #include<stdlib.h>
    int main()
    {
        int (*p)[3];
        p=malloc(sizeof(*p)*3);//32bytes gave 
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&p[i][j]);
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d",p[i][j]);
            }
            printf("\n");
        }
    }