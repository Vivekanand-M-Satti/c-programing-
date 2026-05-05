//array of the pointers 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p[3];
    for (int i=0;i<3;i++)
    {
        p[i]=malloc(3*sizeof(int));
        for(int j=0;j<3;j++)
        {
            scanf("%d",&p[i][j]);
        }
        
    }
     for (int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
        
    }
    printf("%zu\n",sizeof(p));
    printf("%zu",sizeof(*p));
}