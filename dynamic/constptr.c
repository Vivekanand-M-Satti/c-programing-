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
#include <stdio.h>
int main()
{
int num = 100;
const int *iptr = &num;
printf("Number is %d\n", num);
num = 200;

printf("Number is %d\n", *iptr);
// *iptr = 899;
printf("Number is %d\n", *iptr);
return 0;
}
