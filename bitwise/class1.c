#include<stdio.h>
int main()
{
   // unsigned char a=0x67,b=0x39;
   //  printf("%x\n",a&b);
   //   printf("%x\n",a|b);
   //    printf("%x\n",a^b);
   //     printf("%hhx\n",~a);
   char str[5];
fgets(str, sizeof(str), stdin);

printf("%s",str);


}