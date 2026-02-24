// #include<stdio.h>
// // int main()
// // {
// //     // char str[9];
// //     // scanf("%s",str);
// //     // printf("%s",str);

// // }
// // ----------------------passing the string in the function --------------------
// // void pri(char str[])
// // {
// //     printf("%s",str);
// // }
// // int main()
// // {
// //     char str[]="hi";
// //     pri(str);
// // }
// // ---------------------------------by using the pointer and the passing intthe finctions -----------
// void pri(char*str)
// {
//     printf("%s",str);
// }
// int main()
// {
//     char str[]="hi";
//     pri(str);
//  }
// ///////----------------------------------------1 try wap to impliment own strlen function -------------
// void strle(char str[],int *count)
// {
    
//  for (int i=0;str[i]!='\0';i++)
//  {
//    * count++;
//  }
//   printf("str len is =%d",count);


// }
// int main()
// {
//     char str[]="himynameisvivek";// se this..............
//     int count=0;
//     strle(str,&count);
//     //printf("str len is =%d",count);

// }
//-------------------------------wap to convert uppercase to lower case and upper case to the lower case -----
/*#include<stdio.h>
int main()
{
    char str[]="hello";
    for(int i=0;str[i]!='\0';i++)
    {
    printf("%c",str[i]-32);
    }
}*/
//-------------------------------wap to convert uppercase to lower case and upper case to the lower case -----
// #include<stdio.h>
// int main()
// {
//     char str[]="HELLO";
//     for(int i=0;str[i]!='\0';i++)
//     {
//     printf("%c",str[i]-32);
//     }
// }
//------------------------------------------------------revese the string -----------------------------
/*#include<stdio.h>
void reverse (char str[])
{
    int count=0,temp;
    for(int i=0;str[i]!='\0';i++)
    {
        count ++;
    }
    for(int i=0;i<count/2;i++)
    {
        temp=str[i];
        str[i]=str[count-i-1];
        str[count-i-1]=temp;
        
        
    }
    printf("%s",str);

}
int main()
{
    char str[]="world";
    reverse(str);
}
//----------------------------------------------wap to calcuclate the number of the words inthe string -
#include<stdio.h>
void words (char str[])
{
    int count =1;
      for(int i=0;str[i]!=0;i++)
      {
        if(str[i]==' ')
        count ++;
      }
    printf(" the number of the words is the %d",count );
}
int main()
{
    char str[]="hi my name is the vivek";
    words(str);
}
//----------------------------------------------check the string is palinfrome or not ---------------------
#include<stdio.h>
#include<string.h>
void reverse (char str[])
{
    int count=0,temp;
    char str2[strlen(str)];
    for(int i;str[i]!='\0';i++)
    {
        str2[i]=str[i];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        count ++;
    }
    for(int i=0;i<count/2;i++)
    {
        temp=str[i];
        str[i]=str[count-i-1];
        str[count-i-1]=temp;
        
        
    }
 if(str==str2)
 {
    printf("palindrme ");
 }
 else 
 {
    printf("not palindrome ");// -------------------------chaeck this thing it is wrong broiiiiiiii----
 }

}
int main()
{
    char str[]="mom";
    reverse(str);
}*/
// --------------------------------remove the string the by the key -----------------
// #include<stdio.h>
// void remove(char str[],char key)
// {

//  for (int i=0;str[i]!='\0';i++)
//  {
//     if(str[i]==key)
//     {
//         str[i]=str[i+1];//-----------------------check this inthe pg brooiiii-----------------
//     }
//  }
//  printf("%s",str);

// }
// int main()
// {
//     char str[]="hello";
//     char key;
//     scanf(" %c",&key);
//     remove(str,key);
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="heey";
    char str2[]="hEey";
    printf("%d",strcmp(str1,str2));
    if(strcmp(str1,str2)==0)
    {
        printf("both array are same");
    }
    else if(strcmp(str1,str2)>0)
    {
        printf("string 1 is high ");
    }
    else 
    {
        printf("string 2 is high");
    }
}