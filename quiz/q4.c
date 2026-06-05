// 06
// #include<stdio.h>
// int main()
// {
//     char mav[]={97,65,99,49};
//     printf("%s",(char *)mav+1);
//     printf("size = %zu\n", sizeof(mav));
//     printf("%d\n", mav[4]);  // some times the compiler add it self the NULL at the last .
// }
#include <stdio.h>

int main()
{
    
int k=printf("%s","mav");
printf("%d",k);
}