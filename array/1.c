/*#include<stdio.h>
int main()
{
    int i;
    int arr[4]={1,2,3,4};
    arr[0]=17;
    arr[2]=-5;
    for(i=0;i<4;i++)
    {
         printf(" %d ",arr[i]);
    }
}

#include<stdio.h>
int main()
{
    int i;
    int arr[4]={};
    for(i=0;i<4;i++)
    {
         printf(" %d \t",arr[i]);
    }
    int arr1[4]={1,9};
    for(i=0;i<4;i++)
    {
         printf(" %d\t",arr1[i]);
    }
}


   //_______________-_-_-_-_-------___-
   #include<stdio.h>
int main()
{
     int i;
    int arr[4]={1,2,3,4};
    printf("%p",arr);
    printf(" \n%u ",&arr[0]);
    for(i=0;i<=4;i++)
    {
        printf(" \n%p ",&arr[i]);
    }
}

    WAP to Read Array from User & Print them using Loop__________________------------------------

    #include<stdio.h>
int main()
{
    int i ,arr[5];
    printf("enter the 5 elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
//--------------------------------------------------------Find sum and average of the marks by using the  array elements--------------------
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

//------------------------------------------------------------ Count even and odd numbers in an array--------------
#include<stdio.h>
int main()
{
    int a [10],odd_count=0,even_count=0,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("the even count is %d \n",even_count);
    printf("the odd count is the %d \n",odd_count);
    
}
//-----------------------------------------wap to read 2 arrays of the and sum them give to the 3 rd array---------------------------- 
    #include<stdio.h>
    int main ()
    {
        int i,a[5],b[5],c[5];
        for(i=0;i<5;i++)
        {
        
            printf("enter ther a array: ");
            scanf("%d",&a[i]);
            printf("enter ther b array: ");
            scanf("%d",&b[i]);
            c[i]=a[i]+b[i];
            printf("the c array is the %d\n",c[i]);
        }
    }

   //--------------------------------------$$$$$$$$$$$$$$$$$$--------- WAP to Illustrate creation of User defined Array Size
#include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        printf("enter the value to the array at given no of size:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
} //--------------------------------------------------classss-----------------------------------
//1 quetion number print only even number from an array-----------------
#include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        printf("enter the value:");
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        {
            printf(" the even is %d",arr[i]);
        }
    }
}
//2wap to serch the number array 
 #include<stdio.h>
int main()
{
     int i,key=3,flag=0;
    int arr[4]={1,2,3,4};
    for(i=0;i<=4;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }

if(flag==0)
{
    printf("not found\n");
}
else
{
    printf("found\n");
}}
// 3; wap to sum of an array and avag 
include<stdio.h>
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
   
// 5 find the largest form the array 
#include<stdio.h>
int main()
{
    int size ,i;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        printf("enter the value to the array at given no of size:");
        scanf("%d",&arr[i]);
    }

    //7 print the number form the prime frim array
#include<stdio.h>
int main()
{
    int size ,i,j;
    printf("enter the value of the size:");
    scanf("%d",&size);
    int arr [size];
    for(i=0;i<size;i++)
    {
        printf("enter the value :");                            ////
                                         //////////////////////////////
        scanf("%d",&arr[i]);
        for(j=1;j<=size;j++)
        {
            if(arr[i]%j==0)
            {
                printf("%d\n",arr[i]);
            }
        }
    }
}
/// ________5....................----------------wap to remove the from an array 
#include<stdio.h>
int main ()
{
   int j,k,i,num=3;
    int arr[6]={1,2,3,4,5,6};
    {
        for(int i=0;i<=6;i++)
        {
            if(arr[i]==num)
            {                                     ///
                                                 ///
                for(j=0;j<5;j++)
                {
                    arr[j]=arr[j+1];
                
                }
            }}
        
     for(k=0;k<5;k++)
               {
            printf("%d",arr[k]);
               }
            }
   
    }*/
   //-------------------------------------------------remove the duplicate the number--------------------
//    #include<stdio.h>
// int main()
// {
//     int size,j,k,i;

//     printf("Enter array size:");
//     scanf("%d",&size);

//     int a[size];

//     printf("Enter the elements:");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<size;i++)
//     {
//         for(j=i+1;j<size;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 for(k=j;k<size-1;k++)
//                 {
//                     a[k]=a[k+1];
//                 }
//                 size--;
//                 j--;
//             }
//         }
//     }

//     printf("Unique array elements: ");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ",a[i]);
//     }
// } 
#include<stdio.h>
int main()
{
    int size,i,j,k;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    for ( i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for (i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}