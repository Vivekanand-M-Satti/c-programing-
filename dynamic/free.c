#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *ptr;
int iter;
ptr = malloc(6);
for (iter = 0; iter < 5; iter++)
{
ptr[iter] = 'A' + iter;
}
ptr[5]='\0';
printf("%s,%zu",ptr,strlen(ptr));
free(ptr);
free(ptr);
return 0;
}