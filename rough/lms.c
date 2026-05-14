// 
#include<stdio.h>

  print(int number)
{
    printf("%d", number);
    return 89;
}

void main()
{
    int i = 999999;

    int k=print(i++);
     printf("%d", k);
}