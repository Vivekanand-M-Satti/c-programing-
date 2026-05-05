//array of the pointers 
#include<stdio.h>
#include<stdlib.h>
#if 0
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
    printf("%zu\n",sizeof(int*));
    printf("%zu\n",sizeof(p));
    printf("%zu",sizeof(*p));
}
    #endif
     #if 0
     int main()
     {
        int (*arr)[3];
        arr=malloc(sizeof(*arr)*3);
    for (int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        
    }
     for (int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
     printf("%zu\n",sizeof(arr[3]));
    printf("%zu\n",sizeof(arr));
    printf("%zu",sizeof(*arr));
        

     }
     #endif

     int main()
     {
        int **arr;
        arr=malloc(3*sizeof(*arr));
        for(int i=0;i<3;i++)
        {
            arr[i]=malloc(3*sizeof(**arr));
        }
         for (int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
        
    }
     for (int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    printf("%zu\n",sizeof(**arr));
    printf("%zu\n",sizeof(arr));
    printf("%zu",sizeof(*arr));
     }