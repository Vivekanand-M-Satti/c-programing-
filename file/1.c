#include<stdio.h>
int main()
{
    FILE* ptr=fopen("new.txt","r");
    fclose(ptr);
}
