// // #include <stdio.h>

// // int main(int argc, char *argv[]) {
// //     printf("Total arguments: %d\n", argc);

// //     for(int i = 0; i < argc; i++) {
// //         printf("argv[%d] = %s\n", i, argv[i]);
// //     }

// //     return 0;
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]) {
//       int num = atoi(argv[1]);
//     printf("Integer: %d\n", num);
//     float num1 = atof(argv[2]);
//     printf("Float: %f\n", num1);
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(int a,char *ar[])
// {
//     if(a==1)
//     {
//         return 1;
//     }
//     float sum=0;
//     for(int i=0;i<a;i++)
//     {
//         sum+=atoi(ar[i]);
//     }
//     printf("Average %f",sum/(a-1));
    
// }
#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int i = 1;

    while (envp[i] != NULL)
    {
        printf("%s\n", envp[i]);
        i++;
    }

    return 0;
}