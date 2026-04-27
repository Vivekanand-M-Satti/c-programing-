// #include <stdio.h>
// #include <stdarg.h>
// int add(int count,...);
// int main ()
// {

//     int ret;
//     ret = add(3, 2, 4, 4);
//     printf("Sum is %d\n", ret);
//     ret = add(5, 3, 3, 4, 5,10);
//     printf("Sum is %d\n", ret);
//     return 0;

// }
// int add (int count ,...)
// {
//   int sum =0,iter;
//   va_list ap;
//   va_start(ap,count);
//   for(iter=0;iter<count;iter++)
//   {
//     sum+=va_arg(ap,int);
//   }
//   va_end(ap);
//   return sum;
// }/// while collecting we can collect many argument 
#include <stdio.h>
#include <stdarg.h>
int add(int count1,int count2,...);
int main ()
{

    int ret;
    // ret = add(3, 2, 4, 4);
    // printf("Sum is %d\n", ret);
    ret = add(3,2,4,6,7);
    printf("Sum is %d\n", ret);
    return 0;

}
int add (int count1 ,int count2,...)
{
  int sum =0,iter;
  va_list ap;
  va_start(ap,count2);
  for(iter=0;iter<count1;iter++)
  {
    sum+=va_arg(ap,int);
  }
  va_end(ap);
  return sum;
}