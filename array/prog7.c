// // //Find Largest and Smallest Number

// // #include<stdio.h>
// // int main()
// // {
// //     int size;
// //     printf("Enter size af an array: ");
// //     scanf("%d", &size);

// //     int arr[size];

// //     printf("Enter the elements of the array:\n");
// //     for (int i=0; i<size; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     int largest=arr[0];
// //     for (int i=0; i<size; i++)
// //     {
// //         if (arr[i]>largest)
// //         {
// //             largest=arr[i];
// //         }
// //     }
// //     printf("Largest: %d", largest);
// //     printf("\n");

// //     int smallest=arr[0];
// //     for (int i=0; i<size; i++)
// //     {
// //         if (arr[i]<smallest)
// //         {
// //             smallest=arr[i];
// //         }
// //     }
// //     printf("Smallest: %d", smallest);
// //     printf("\n");
// // }
// #include<stdio.h>
// int main()
// {
//     int size,temp;
//     scanf("%d",&size);
//        int arr[size];
//        for (int i=0;i<size;i++)
//        {
//         scanf("%d",&arr[i]);

//        }
//        for(int k=0;k<size;k++)
//        {
//         for(int j=k+1;j<size;j++)
//         {
//            if (arr[k]>arr[j])
//            {
//             temp=arr[k];
//             arr[k]=arr[j];
//             arr[j]=temp;
//            }
//         }
         

        
//        }
//        for (int i=0;i<size;i++)
//        {
//         printf("%d",arr[i]);
//        }

// }
#include<stdio.h>
int main()
{
   int size,flag=0,i,k;
   scanf("%d",&size);
   int arr[size];
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<size;i++)
   {
      flag=0;
      for(k=0;k<i;k++)
      {
         if(arr[i]==arr[k])
         {
            flag=1;
         }
      }
      if(flag==0)
      {
         printf("%d",arr[i]);
      }
   }
}