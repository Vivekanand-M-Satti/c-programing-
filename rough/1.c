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
 #include<stdio.h>
 int main()
 {
    int a=9;
    switch (a*9)
    {
    case 81:
        printf("mav");
        break;
    
    default:
        break;
    }
 }