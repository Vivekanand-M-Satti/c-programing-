// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
//     int ch;
//     for(;(ch=getchar())!=EOF;)
//     {
//         putchar(toupper(ch));
//     }
//     puts("EOF RECEVIED");
//     return 0;
// }
//--------------------------------------------------------------------------------------//
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// int ch;
// for ( ; (ch = getc(stdin)) != EOF; )
// {
// putc(toupper(ch), stdout);
// }
// puts("EOF Received");
// return 0;
// }
#include<stdio.h>
#include<unistd.h>
int main()
{
    while(1)
    {
        putc('A',stdout);
        sleep(1);
    }
}
//move the newline character