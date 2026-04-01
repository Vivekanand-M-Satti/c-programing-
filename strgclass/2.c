// // // #include<stdio.h>
// // // #include<unistd.h>
// // // int num;
// // // void func1();
// // // int main()
// // // {

// // //     while (1)
// // //     {
// // //         num++;
// // //         ();
// // //         sleep(1);
// // //         /* code */
// // //     }
// // //     return 0;
    
// // // }
// // #include<stdio.h>
// // int main()
// // {
// //     int i,j,k;
// //     for(i=1;i<=100;i++)
// //     {
// //         printf("\rLoading[");
// //         for(j=1;j<=100;j++)
// //         {
// //             j<=i?putchar('*'):putchar(' ');
// //         }
// //         printf("] %3d%%",i);
// //         fflush(stdout);
// //         //sleep(1);
// //         for(k=0xaaffff;k--;);
// //     }
// //     printf("\nfinished\n");
// //     return 0;
// // }
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     int ch;
//     int char_count = 0, word_count = 0, line_count = 0;
//     int flag = 0;   // flag to track word

//     while ((ch = getchar()) != EOF)
//     {
//         char_count++;

//         // Count lines
//         if (ch == '\n')
//         {
//             line_count++;
//         }

//         // Check word
//         if (ch==' '||ch=='\t')
//         {
//             if(line_count>0)
//             flag = 0;   // word ended
//         }
//         else if (flag == 0)
//         {
//             flag = 1;   // new word started
//             word_count++;
//         }
//     }

//     printf("Character count : %d\n", char_count);
//     printf("Line count : %d\n", line_count);
//     printf("Word count : %d\n", word_count);

//     return 0;
// }
#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    int char_count = 0, word_count = 0, line_count = 0;
    int in_word = 0;

    while ((ch = getchar()) != EOF)
    {
        char_count++;

        if (ch == '\n')
            line_count++;

        if (isspace(ch))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            word_count++;
        }
    }

    printf("Character count : %d\n", char_count);
    printf("Line count : %d\n", line_count);
    printf("Word count : %d\n", word_count);

    return 0;
}