// // #include<stdio.h>

// // int main()
// // {
// //     int a ;
// //     int n[a=10];

// //     printf("Array size = %d", a);
// //     return 0;
// // }

// // ////ternary 
// // #include<stdio.h>
// // int main()
// // {
// //     char n;
// //     printf("enter the number");
// //     scanf("%c",&n);
// //     (n>='A'&&n<='Z')?printf("lower case %c",(n+32)):
// //     (n>='a'&&n<='z')?printf("upper case %c",(n-32)):// why we cannot use the'32' in addition
// //     printf("%c",n);
// // }

// // #include<stdio.h>
// // int main()
// // {
// //     char n;
// //     printf("enter the number:");
// //     scanf(" %c",&n);
// //     (n>='A'&&n<='Z')?printf("Upper case")://$ also digit
// //     (n>='a'&&n<='z')?printf("lower case"):
// //     (n>='0'&&n<='9')?printf("digit"):
// //     printf("special character");

// // }
// // //-----------------------------------------check the size and get the out by using the 2 variable ...................20/02/26
// // #include<stdio.h>
// // int  print(int arr[],int size)
// // {
// //        if (size==0)
// //        {
// //       return 0;
// //        }
       
    

// //            int j= print(arr,size-1);
// //             printf("%d ",arr[j]);

// //     }
// // int main()
// // {
// //     int arr[5]={5,6,7,8,9};
// //     int size=5;
// //     print(arr,size);

// // }
// //------------------------------------HW the reverse the array by using the pointer and the refcursion-----------
// // -----------------------------------which is the largest digit in the  the pointer and the refcursion------------
// //----------------------palinfrome or not ---------------------------------
// // #include<stdio.h>
// // void change_bit(char*aaa)
// // {
// //     for(int i=0;i<2;i++)
// //     {
// //         unsigned char c =aaa[i];
// //         aaa[i]=aaa[4-i-1];
// //         aaa[4-i-1]=c;
// //     }
// // }
// // int main()
// // {
// //     unsigned int a;
// //     scanf("%X",&a);
// //    //change_bit(aa); 
// //     unsigned char *aa=(unsigned char*)&a;
// //     change_bit(aa); 

    
// //         printf("%x",a);
    
// //

// #include<stdio.h>
// void sort(int arr[],int size)
// {
//     static int a=0;
//     int temp;

//     if(a==2)
//     {
//         return ;
//     }
//     for (int i=0;i<size;i++)
//     {
//         for (int j=0;j<size;j++)
//         {
//             if(a==0)
//             {
//             if(arr[i] > arr[j])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         if(a==1)
//             {
//             if(arr[i] < arr[j])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         }
//     }
//      for(int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     a++;
//     sort(arr,size);
    

// }
// int main()
// {
//     int  x;
//     int size;scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort(arr,size);
// }
//  #include<stdio.h>
//  int main()
//  {
//     int n,num=1;
//     scanf("%d",&n);
//     for (int i=1;i<n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",num++);
//         }
//         printf("\n");
//     }
    
//  }
#if 0
#include <stdio.h>

int main()
{
    int i = 0;

    i++;

    if(i <= 4)
    {
        printf("Emertxe");

        return;

        main();
    }

    return 0;
}
    #endif 

//     #include<stdio.h>
// int main()
// {
//     200;
//     printf("%d",10);
// }
#if 0
#include<stdio.h>

int main()
{
     int x = 5,*y;
     y=&x;

    
   scanf("hi mav %d",&x);
}
   #include<stdio.h>
   int main()
{
    char *s = "myworld";
    int i = 7;

    printf("%s*", i, s);
}
    

   #include <stdio.h>
#include <string.h>
int i=99;

int main()
{
static int i;
int i;

    { 
        int i=89;
    printf("%d",i);
}

    
    printf("%d",i);

    return 0;
}
    
#include<stdio.h>
 struct simp
    {
        int i;
        char city[];
    };

   int main()
{
   
    struct simp s1;

    printf("%d", s1.i);
    printf("%s", s1.city);

    return 0;
}
    #endif
// #include<stdio.h>
//     int a = 52;

// int main()
// {
//     const extern int a;

//     printf("%d\n", a);
// }
// #include<stdio.h>
// int a = 52;           // Global variable 'a' = 52

// int main() {
//      int a;
//      scanf("%i",&a) ;  // Declares 'a' as a reference to the external (global) 'a'
//     printf("%i\n", a);    // Prints global 'a'
// }
// #include <stdio.h>

// #pragma pack(8)

// struct st
// {
//     char y;
//     double x;
//     char y1;
// };

// int main()
// {
//     printf("%zu", sizeof(struct st));

//     return 0;
// }
// #include <stdio.h>

// union mav
// {
//     unsigned int a : 8;
//     unsigned char b[2] :8;
// };

// int main()
// {
//     union mav m;
//     unsigned char tm;

//     scanf("%x", &tm);
//      tm         

//     printf("%X", m.a);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a=-9;
//     if(!a)
//     {
//         printf("mav");
//     }
//     printf("%d",abs(a));
// }
#include<stdio.h>
int main()
{
    int i = 10;

    goto label2;

    while(i)
        switch(i - 1)
            case 1:

label2:
    printf("%d\n", i);
}