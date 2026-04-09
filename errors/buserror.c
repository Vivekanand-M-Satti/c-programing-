#include <stdio.h>
int main()
{
char array[sizeof(int) + 1];
int *ptr1, *ptr2;
ptr1 = &array[0];
ptr2 = &array[1];
scanf("%x %x", ptr1, ptr2);
printf("%x %x",*ptr1,*ptr2);
return 0;
}
