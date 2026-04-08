// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<string.h>
// // int main()
// // {
// //     char *ptr;
// //     ptr=calloc(6,1);
// //     if(ptr==NULL)
// //     {
// //         perror("Error");
// //         return -1;
// //     }
// //     strcpy(ptr,"vivek");
// //     puts(ptr);
// //     printf("%s",ptr);
// //     free(ptr);
// //     return 0;
// // }
// //find the sum and the avg of the array using dynamic memory 
// // ? average of array 
// #include<stdio.h>
// #include<stdlib.h>

// int  read_ele(int *arr, int size)
// {
//     int sum=0;
//     for(int i = 0; i < size; i++)
//     {
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// float average_arr(int *arr, int size)
// {
//     int sum = 0;
//     for(int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     float avg = sum / (float) size;
//     return avg;
// }
// int main()
// {
//     int size;
//     scanf("%d",&size);
//     int *ptr = (int *) calloc(size, sizeof(int));

//     //int *ptr = (int *) malloc(size * sizeof(int));

//     if(ptr == NULL)
//     {
//         perror("Error : ");
//         return -1;
//     }
//     printf("the sum of the array is %d", read_ele(ptr,size));
//     printf("Average of array = %g\n",average_arr(ptr,size));

//     free(ptr);

//     return 0;
// }
// //#endif
//---------------------------------strduplcate by meee---------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_dup(char *str,int size)
{

    char *ptr=malloc(6*sizeof(char));
    strcpy(ptr,str);
    printf("%s",str);
    free(ptr);

}

int main()
{
    
    //char * str2="hello";
    char *str1;
    
    str_dup("hello",strlen(str1));
}
// --------------------------------------------str_dup in the class 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *ptr;
//     ptr=strdup("vivek");

// }