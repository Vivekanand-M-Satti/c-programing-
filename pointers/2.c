//-------------------------------------------rule number 5--------------------------------------------
// #include<stdio.h>
// int main()
// { int a=5;
// int *ptr=&a;
// printf("%u\n",ptr);
// printf("%u",ptr+2);
// }
//-------------------------------pass by the referece--------------------
/*#include<stdio.h>
void update(int *a,int *b)
{
  *a+=1;
  *b+=3;
}
  void main()
  {
  int a=80,b=90;
  printf("%d\t%d\n",a,b);
  update(&a,&b);
  printf("%d\t%d",a,b);


}*/
//-------------------------------------------print the array by using the pointer ---------------------------------------
// #include<stdio.h>
// int main()
// {
//     int arr[]={5,4,6,7};
//     int *ptr=arr;
//     for(int i=0;i<4;i++)
//     {
//         printf("%d ",(*ptr+i));
//     }
//     printf("%u",arr);
// }
// #include<stdio.h>
// void print(int arr[],int size)
// {
// for(int i=0;i<=size;i++)
// {
//     printf("%d",arr[i]);
// }
// }
// int main()
// {
//     int arr[]={5,4,6,7};

//     print(arr,3);
   
// }
////////////////////////////////////////////20/02/2026----------------------------------------
// #include<stdio.h>
// void output(int arr[],int size)
// {
//   for(int i=0;i<size;i++)
//   {
//     printf("%d",arr[i]);
//   }
// }
// void input(int arr[],int size)
// {
//   for(int i=0;i<size;i++)
//   {
//     scanf("%d",&arr[i]);
//   }

// }
// void main()
// {
//   int size;
// scanf("%d",&size);
// int arr[size];
// input(arr,size);
// output(arr,size);
#include<stdio.h>
int  print(int arr[],int size)
{
       if (size==-1)
       {
      return 0;
       }
       
    

              print(arr,size-1);
            printf("%d ",arr[size]);

    }
int main()
{
    int arr[5]={5,6,7,8,9};
    int size=5-1;
    print(arr,size);
}
 