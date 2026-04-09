// #include <stdio.h>
// int main()
// {
// const int num = 100;
// int *iptr = &num;
// printf("Number is %d\n", *iptr);
// *iptr = 200;
// printf("Number is %d\n", num);
// return 0;
// }
// example ----------------------------------2
// #include <stdio.h>
// int main()
// {
// int num = 100;
// const int *iptr = &num;
// printf("Number is %d\n", num);
// num = 200;

// printf("Number is %d\n", *iptr);
// // *iptr = 899;
// printf("Number is %d\n", *iptr);
// return 0;
// }
// -----------------------------------example -3
#include<stdio.h>
int main()
{
    int x=10,y=20;
    int *const ptr=&x;
    printf("*ptr : %d\n",*ptr);
    ptr=&y;// compiler error 
    printf("*ptr : %d \n",*ptr);
    
}
