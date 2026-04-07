#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *ptr;
    ptr=calloc(6,1);
    if(ptr==NULL)
    {
        perror("Error");
        return -1;
    }
    strcpy(ptr,"vivek");
    puts(ptr);
    printf("%s",ptr);
    free(ptr);
    return 0;
}