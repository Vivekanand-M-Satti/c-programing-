// #include <stdio.h>

// int main(int argc, char *argv[]) {
//     printf("Total arguments: %d\n", argc);

//     for(int i = 0; i < argc; i++) {
//         printf("argv[%d] = %s\n", i, argv[i]);
//     }

//     return 0;
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
      int num = atoi(argv[1]);
    printf("Integer: %d\n", num);
    float num1 = atof(argv[2]);
    printf("Float: %f\n", num1);
    return 0;
}