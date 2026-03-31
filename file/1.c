//--------------------------------this is where the normmal file read without the error broii----------
// #include<stdio.h>
// int main()
// {
//     FILE* ptr=fopen("new.txt","r");
//     fclose(ptr);
// }
//=======================================the read but but the not wxisting file show the segmentation fault thats why we are using the 
// validation for that to over come error brrooo 
#include<stdio.h>
int main()
{
    FILE* ptr=fopen("new.tt","r");
    if(ptr==NULL)
    {
        printf("hu mav atta kelsa");
        return -1;
    }
    fclose(ptr);// if the file not exist the we have return the in validation only beacuse at last in 
    //fclose the it closes the NULL it means the segnetation fault maam did u understand
}
//----------------------------------read and the print the file by using thee while loop========
// #include<stdio.h>
// int main()
// {
//     FILE* ptr=fopen("new.txt","r");
//     if(ptr==NULL)
//     {
//         printf("hu mav atta kelsa");
//         return 0;
//     }
//     else
//     {
//         char ch ;
//         while ((ch= fgetc(ptr))!=EOF)
//         printf("%c",ch);
//     }
//     fclose(ptr);
// }
//-------------------------------------read and creat the file and copyy the info present in that file to another file
// #include<stdio.h>
// int main()
// {
//     FILE*ptr1,*ptr2;
//     ptr1=fopen("new.txt","r");
//     ptr2=fopen("cpy.txt","w");
//     char ch;
//     while((ch=getc(ptr1))!=EOF)
//     {
//           putc(ch,ptr2);
//     }
//     printf("success");
// }

// #include<stdio.h>
// int main()
// {
//     FILE*ptr=fopen("new.txt","r");// while printing like the stdout and the cpying to another file we cannot use the write mode bcs 
//     // it erase every thing what is before ..
//     char ch;
//     while(ch=fgetc(ptr))
//     {
//         if(feof(ptr))// feof is the idicator that indicator that sure whre char ch is contains is EOF or not ;
//         break;
//         fputc(ch,stdout);
//     }
// }
//
//

/////////////////////////////////////// p of the clearerr function by clearing the EOF 
// #include <stdio.h>

// int main()
// {
//     FILE *fp = fopen("new.txt", "r");
//     char ch;

//     while ((ch = fgetc(fp)) != EOF)
//         putchar(ch);

//     // Now EOF reached
//     if (feof(fp))
//         printf("\nEOF reached\n");
//         if(ferror(fp))
//         printf("hi mav");// not print becouse eof is not the error so give the the flase in the if condtion

//     clearerr(fp);  // RESET

//     if (!feof(fp))
//         printf("EOF cleared!\n");

//     fclose(fp);
// }
// #include<stdio.h>
// int main()

// {
//     FILE* ptr=fopen("new.txt","w");
//     int ch;
//     ch=fgetc(ptr);
//     if(ferror(ptr))
//     printf("hu mav");
//     clearerr(ptr);
//     if(ferror(ptr))
//     printf("hu mav");
    
// }
// #include <stdio.h>

// int main()
// {
//     FILE *fp = fopen("new.txt", "r");
//     char ch;

//     while ((ch = fgetc(fp)) != EOF)
//         putchar(ch);

//     // Now EOF reached
//     if (feof(fp))
//         printf("\nEOF reached\n");

//     clearerr(fp);  // RESET

//     if (!feof(fp))
//         printf("EOF cleared!\n");
         
//         ch=fgetc(fp);//learerr only resets the error and EOF flags, but it doesn't change the file position.When you call 
//         //clearerr(fp), it clears the EOF flag, allowing further I/O operations on the file. However, the file position remains 
//         //at the end of the file (EOF).
//         // SO IT RETURNS THE EOF AS THE -1   AND THATS WHY IT WILL PRINT THE ANY GARBAGE VALUE BROOO
//         printf("%c",ch);// it print any charecter of the EOF 

//     fclose(fp);
// }
