
//-------11/03/2026/
//--------------------------accessing the not present file and by using the read mode-------------------------
// #include<stdio.h>
// int main()
// {
//     FILE*fp;
//     fp=fopen("new.txt","r");
//     if(fp==NULL)
//     {
//      perror("error");// it is the function that which give the reson of the error
//         printf("file is not present");
 
//  return -1;   }
//  fclose(fp);
//  return 0;
// }
//---------------------------by usingthe same in the write mode-------------------------------
// #include<stdio.h>
// int main()
// {
//     FILE*fp;
//     fp=fopen("new.c","w");
//     if(fp==NULL)
//     {
//      perror("error");// it is the function that which give the reson of the error
//         printf("file is not present");
 
//  return -1;   }
//  fclose(fp);
//  return 0;
// }
// ------------------------------------------------------print the data if the file is present ---------------------
// #include<stdio.h>
// #include<stdio.h>
// int main()
// {
//     FILE*fptr;
//     char ch;
//     fptr=fopen("new.c","r");
//     while (ch=fgetc(fptr))
//     {
//         if(feof(fptr))
//         break;
//         fputs(ch,stdout);
//     }

// fclose(fptr);
// return 0;
// // }
// //--------------------------------------------------------read the file and the copy the every thing in the another file
// #include<stdio.h>
// int main()
// {
//     FILE*fp,*fc;
//     fp=fopen("new.c","r");
//     fc=fopen("copy.c","w");
//     if(fp==NULL||fc==NULL)
//     {
//         perror("error");
//         return -1;
//     }
//     char ch;
//    // fptr=fopen("new.c","r");
//     while (ch=fgetc(fp)!=EOF)
//     {
        
//         fputs(ch,fc);
//     }
// printf("coppy is complited");
// fclose(fc);
// fclose(fp);
// return 0;
// }#include<stdio.h>
//-----------------------------------------HOW THE ferror and the clearerror functions--------------------------
#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("new.txt","w");
    if(fp==NULL)
    {
        perror("error");
        return -1;

    }
    char ch;
    ch=fgetc(fp);
    if(ferror(fp))
    fprintf(stderr,"ERROR IN reading ");
    clearerr(fp);
    if((ferror(fp)))
    printf("error in reasing ");
    fclose (fp);
    return 0;
}