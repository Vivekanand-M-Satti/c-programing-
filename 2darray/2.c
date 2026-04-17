// #include<stdio.h>
// int main()
// {
//     int sum=0,min,a,b,s1=0,s2=0,s3=0;
//     scanf("%d%d",&a,&b);
//     int arr[a][b];//={10,20,30,40,50,60};
//     // sum=-3333;
//     // min=arr[0][0];
//     for (int i=0;i<a;i++)
//     {
//         for (int j=0;j<b;j++)
//         {
//             scanf("%d",&arr[i][j]);
            
//         }
//     }
//     for (int i=0;i<a;i++)
//     {
//         s1=0;
//         for (int j=0;j<b;j++)
//         {
            
//                 s1+=arr[i][j];
//         }
//         printf("%d\n",s1);
//     }
//     //printf(" the largest is %d\n",sum);
//     //printf("the smallest is %d",min);
//     //printf("%d\n",s1);
//     //printf("%d",s2);
// }
// #include<stdio.h>
// int main()
// {
//     int sum=0,min,a,b,s1=0,s2=0,s3=0;
//     scanf("%d%d",&a,&b);
//     int arr[a][b];//={10,20,30,40,50,60};
//     // sum=-3333;
//     // min=arr[0][0];
//     for (int i=0;i<a;i++)
//     {
//         for (int j=0;j<b;j++)
//         {
// //             scanf("%d",&arr[i][j]);
            
//         }
//     }
//     for (int i=0;i<a;i++)
//     {
//         s1=0;
//         for (int j=0;j<b;j++)
//         {
            
//                 s1+=arr[i][j];
//         }
//         printf("%d\n",s1);
//     }
//     //printf(" the largest is %d\n",sum);
//     //printf("the smallest is %d",min);
//     //printf("%d\n",s1);
//     //printf("%d",s2);
// }
//vivek mahadev satti
//aattili satti satti satti attili satti heee satti 

#include<stdio.h>
int main()
{
    int sum=0,min,a,b,s1=0,s2=0,s3=0,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];//={10,20,30,40,50,60};
    // sum=-3333;
    // min=arr[0][0];
    for (i=0;i<a;i++)
    {
        for ( j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    for ( i=0;i<a;i++)
    {
        //s1=0;
        for (j=0;j<b-1;j++)
        {
            if(arr[i][j]<arr[i][j+1])
            {
                int temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
            }
            
                //s1+=arr[i][j];
        }

    }
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }

        //printf("%d\n",s1);    
    }