
// //-------11/03/2026/
// //--------------------------accessing the not present file and by using the read mode-------------------------
// // #include<stdio.h>
// // int main()
// // {
// //     FILE*fp;
// //     fp=fopen("new.txt","r");
// //     if(fp==NULL)
// //     {
// //      perror("error");// it is the function that which give the reson of the error
// //         printf("file is not present");
 
// //  return -1;   }
// //  fclose(fp);
// //  return 0;
// // }
// //---------------------------by usingthe same in the write mode-------------------------------
// // #include<stdio.h>
// // int main()
// // {
// //     FILE*fp;
// //     fp=fopen("new.c","w");
// //     if(fp==NULL)
// //     {
// //      perror("error");// it is the function that which give the reson of the error
// //         printf("file is not present");
 
// //  return -1;   }
// //  fclose(fp);
// //  return 0;
// // }
// // ------------------------------------------------------print the data if the file is present ---------------------
// // #include<stdio.h>
// // #include<stdio.h>
// // int main()
// // {
// //     FILE*fptr;
// //     char ch;
// //     fptr=fopen("new.c","r");
// //     while (ch=fgetc(fptr))
// //     {
// //         if(feof(fptr))
// //         break;
// //         fputs(ch,stdout);
// //     }

// // fclose(fptr);
// // return 0;
// // // }
// // //--------------------------------------------------------read the file and the copy the every thing in the another file
// // #include<stdio.h>
// // int main()
// // {
// //     FILE*fp,*fc;
// //     fp=fopen("new.c","r");
// //     fc=fopen("copy.c","w");
// //     if(fp==NULL||fc==NULL)
// //     {
// //         perror("error");
// //         return -1;
// //     }
// //     char ch;
// //    // fptr=fopen("new.c","r");
// //     while (ch=fgetc(fp)!=EOF)
// //     {
        
// //         fputs(ch,fc);
// //     }
// // printf("coppy is complited");
// // fclose(fc);
// // fclose(fp);
// // return 0;
// // }#include<stdio.h>
// //-----------------------------------------HOW THE ferror and the clearerror functions--------------------------
// // #include<stdio.h>
// // int main()
// // {
// //     FILE*fp;
// //     fp=fopen("new.txt","w");
// //     if(fp==NULL)
// //     {
// //         perror("error");
// //         return -1;

// //     }
// //     char ch;
// //     ch=fgetc(fp);
// //     if(ferror(fp))
// //     fprintf(stderr,"ERROR IN reading ");
// //     clearerr(fp);
// //     if((ferror(fp)))
// //     printf("error in reasing ");
// //     fclose (fp);
// //     return 0;
// // }
// //-------------------------------------------ftell---------------------------------------
// // #include <stdio.h>
// // #include <stdlib.h>
// // int main()
// // {
// //   FILE *fptr;
// // char ch;
// // fptr = fopen("1.c", "r");
// // /* Need to do error checking on fopen() */
// // printf("File offset is at : %ld\n\n", ftell(fptr));

// // while ((ch = fgetc(fptr)) != EOF)
// // fputc(ch, stdout);
// // printf("\nat the end file offset is at :%ld\n", ftell(fptr));
// // fclose(fptr);
// // return 0;
// // }
// //-----------------------------------------------------------wap to program 
//  #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     float num3;
//     char str[10], oper, ch;
//     FILE*fptr;
//     if ((fptr = fopen("text.txt", "w+")) == NULL)
//   {
//           fprintf(stderr, "Can't open input file text.txt!\n");
//               return 1;
//    }

//    fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
//    //rewind(fptr);
// fscanf(fptr, "%d %c %d %s %f", &num1, &oper, &num2, str, &num3);
// fclose(fptr);
// fopen(fptr);

// printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

// fclose(fptr);
// retur 0;
// }
#include<stdio.h>
#include<stdio_ext.h>
int main()
{
    char ch='y';
    printf("enter the name");
    while(ch!='n')
    
    {
        scanf("%c",&ch);
        __fpurge(stdin);
        printf("%c\n",ch);
    }
}