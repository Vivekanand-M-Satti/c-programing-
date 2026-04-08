#include<stdio.h>
int main()
{
    FILE*fp=fopen("vivek.t","w");
    char ch = 'v';
    putc(ch,fp);
    fputc('i',fp);
}