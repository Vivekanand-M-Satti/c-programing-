


//-----------------------------------------------------little endian-----------------------------------------------------------------
/*#include<stdio.h>
int main()
{
    int num=0x12345678;
    int*ptr=&num;
    char*cptr=&num;
    printf("%hhx",*ptr);
    if(*cptr==0x78)
    {
  printf("little ");
    }
    else{
        printf("big");
    }
}
//-------------------------------------------------little endian by using the usigned ------------------------------------
#include<stdio.h>
int main()
{
    int num=0x12345680;
    int*ptr=&num;
    unsigned char*cptr=&num;
    printf("%hx",*ptr);
    if(*cptr==0x80)
    {
  printf("little ");
    }
    else{
        printf("big");
    }
}*/
#include<stdio.h>
int main()
{
    int num=0x12345670;
    short int*ptr=&num;
    unsigned char*cptr=&num;
    printf("%hx",*ptr);
    //if(*ptr==0x80)
    {
 // printf("little ");
    }
   // else{
        //printf("big");
    }
}


