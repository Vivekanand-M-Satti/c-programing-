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
// #include<stdio.h>
// #include<unistd.h>
// int main()
// {
//     while(1)
//     {
//         putc('A',stdout);
//         sleep(1);
//     }
// }
// //move the newline character


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int width=30,height=10;
    int ballx=10,bally=3;
    int dx=1,dy=1;
    int paddlex=12;
    char ch;

    while(1)
    {
        system("clear");   // use "cls" in windows

        for(int y=0;y<height;y++)
        {
            for(int x=0;x<width;x++)
            {
                if(y==bally && x==ballx)
                    printf("O");
                else if(y==height-1 && x>=paddlex && x<paddlex+5)
                    printf("=");
                else
                    printf(" ");
            }
            printf("\n");
        }

        ballx+=dx;
        bally+=dy;

        if(ballx<=0 || ballx>=width-1)
            dx=-dx;

        if(bally<=0)
            dy=-dy;

        if(bally==height-2 && ballx>=paddlex && ballx<paddlex+5)
            dy=-dy;

        usleep(100000);

        printf("Move paddle (a/d): ");
        scanf(" %c",&ch);

        if(ch=='a') paddlex--;
        if(ch=='d') paddlex++;
    }
}