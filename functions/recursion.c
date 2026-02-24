// #include<stdio.h>
// int main()
// {
//     int a;
//     int i = 1;
//     scanf("%d",&a);
//     while(a!=0)
//     {
//           printf("%d",a%2);
//           a=a/2;
//     }
// }
/////////---------------------------reverse thhe 12279 as the 97221 and 1 2 7 7 9 by using the recursion
/*#include<stdio.h>
void  reverse (int a )
{
    if (a==0)
    return;
    
    printf("%d\n\t",a%10);
    reverse(a/10);
    printf("%d\n\t",a%10);
     

}
int   main()
{
   reverse(12345);
}
// -------------------------------------------------------print the numbers up to the limits ------------------------------------
#include<stdio.h>
void limit(int a ,int l)
{
    
    if (a==l)
    return;

    limit(a+1,l);
    printf("%d",a);

}
void main()
{
    int a,l;
    scanf("%d %d",&a,&l);
    limit (a,l);
}*/
// ----------------------------------------------------------ddecimal to binary------------------------
// #include<stdio.h>
// int main()
// {
// void dtb(int a)
// {
//     if (a==0)
//     {
//         return;
//     }
//     dtb(a/2);
//     printf("%d",a%2);

// }
// void main()
// {
//     int b;
//     scanf("%d",&b);
//     dtb(b);

//     printf(" is the binary of the %d",b);
// }
////----------------------------------------------------16/02/2026----------------------------------
//---------------------------------------------------sum of the first n natural numbers---------------------------
/*#include<stdio.h>
int sum(int a)
{
 if(a==0)
 {
    return 0;

 }
 return a+sum(a-1);
}
void main()
{
    int a ;
    scanf("%d",&a);
    printf("%d",sum(a));
}
// -------------------------------------------factorial number-----------------------------------
#include<stdio.h>
int sum(int a)
{
 if(a==0)
 {
    return 1;

 }
 return a*sum(a-1);
}
int  main()
{
    int a ;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
//----------------------------------------------power of the number----------------------------------------
#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
 
 return a*power(a,b-1);
}
int  main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
//--------------------------------------------------------prime number by the recursion ----------------------------------------
  #include<stdio.h>
  int prime (int a,int n)
  {
if (a==n)
{
    return 1;
}
if ( n%2==0)
{
    return 0;
}
  }
  
int main()
{
    int n;
    scanf("%d",&n);
    if(prime (2,n)==0)
    {
        printf("not prime number ");
    }
    else{
        printf("is the prime number");
    }
    return 0;
}*/



// -----------------------------------------------------------------17/02/2026----------------------------
#include<stdio.h>
int fibo(int a)
{
    if(a==-1)
    {
        return -1;
    }
    printf("%d",a+fibo(a-1));
    

}
void main()
{
    int a;
    scanf("%d",&a);
    fibo(a);
}
//------------------------------------------------printing the array reverse by the recursion 
#include<stdio.h>
void array(int arr[],int size,int a,int b)
{ int temp;
    b=size;
    if(a==size/2)
    {
        return ;
    }
    temp=arr[a];
    arr[a]=arr[size-a-1];
    arr[size-1-a]=temp;


    array(arr,size,a+1,b);
}
int main()
{
    int size,a=0,b=1;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    array (arr,size,a,b);
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }


}