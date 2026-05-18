//--------------------------------------printing the array by using the pointers and the recursion ---------------
/*#include<stdio.h>
void print(int arr[],int limit,int size)
{
       if (limit==size)
       {
      return;
       }
       
       printf("%d ",arr[limit]);

           print(arr,limit+1,size);
    }
int main()
{
    int arr[5]={5,6,7,8,9};
    int size=5;
    print(arr,0,size);

}*/
// #include<stdio.h>
// int  print(int arr[],int size)
// {
//        if (size==0)
//        {
//       return 0;
//        }
//            int j= print(arr,size-1);
//             printf("%d ",arr[j]);

//     }
// int main()
// {
//     int arr[5]={5,6,7,8,9};
//     int size=5;
//     print(arr,size);
// }
// #include<stdio.h>
// void array (int arr[],int size)
// {
//     for(int i=0;i<size ;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
// }
// int main()
// {
//     int size;
//     int arr[]={1,2,3,4,5};
//     size=5;
//     array(arr,size);
//     for(int i=0;i<size;i++)
//     {

//     }
    
// }
// //------------------------------------------------printing the array reverse by the recursion 
// #include<stdio.h>
// void array(int arr[],int size,int a,int b)
// { int temp;
//     b=size;
//     if(a==size/2)
//     {
//         return ;
//     }
//     temp=arr[a];
//     arr[a]=arr[size-a-1];
//     arr[size-1-a]=temp;


//     array(arr,size,a+1,b);
// }
// int main()
// {
//     int size,a=0,b=1;
//     scanf("%d",&size);
//     int arr[size];
    
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     array (arr,size,a,b);
//     for(int i=0;i<size;i++)
//     {
//         printf("%d",arr[i]);
//     }


// }
// -----------------------------------------------------printing the array by the increment of the pointer--------
// #include<stdio.h>
// void array(int *ptr,int size)
// {
//     if(size==0)
//     return;

//     printf("%d",*ptr++);
//     array(ptr,size-1);
    

// }
// void main()
// {
//     int size;
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     array (arr,size);

    
// }
#include<stdio.h>

int call(int i)
{
    if(i==0)
    {
    return 0;
    }
    
   
    call( i/2);
   printf("%d ",i%2);

}
int main()
{
    call(127);
}