
// #include<stdio.h>
// int main()
// {
//     int size,target,i,j,a,b;
//     scanf("%d",&size);
//     int arr[size];
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&target);
//     for (i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++)
//         {
//             if(i==j)
//             continue;
//             else if(arr[i]+arr[j]==target)
//             {
//                 a=i,b=j;
//             }
//         }
//     }
//     printf("[%d,%d]",a,b);
    

// }
#include<stdio.h>
int main()
{
    int size;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    
    { 
        if(i==0)
        continue;
        //printf("hi");

        arr[i]=arr[i-1]+arr[i];
    }
     for(int i=0;i<6;i++)
    {
      printf("%d ",arr[i]);
    }
    
}
