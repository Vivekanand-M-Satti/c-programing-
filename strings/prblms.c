//----------------------------1..............write the own string in the function/
/*#include<stdio.h>
void strin(char *str)
{
    printf("%s",str);
}
int main()
{
    char str1[]="hello mav";
    strin (str1);

}
//-----------------------------2-------wap to convert the upper case to the lower ccase and the lower case to the upper case-
#include<stdio.h>
void change(char str[])
{
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            printf("%c",str[i]=str[i]-32);
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            printf("%c",str[i]=str[i]+32);
            
        }
    }
    printf("%s",str);

}
int main()
{
    char str[]="heLLlo";
    change(str);
}
//--------------------------------------------3.-------reverse the string by using the size off broo ----
#include<stdio.h>
void reverse(char str[],int s)
{
    int  temp;

    
    for(int i=0;i<s/2;i++)
    {
        temp=str[i];
        str[i]=str[s-i-1];
        str[s-i-1]=temp;


    }
    printf("%s",str);

}
int main()
{
    char str[]="my name is who";
    int s=sizeof(str);

    reverse (str,s-1);
}
//--------------------------------------------3.-------reverse the string by using the strlen  broo ----
#include<stdio.h>
#include<string.h>
void reverse(char str[],int s)
{
    int  temp;

    
    for(int i=0;i<s/2;i++)
    {
        temp=str[i];
        str[i]=str[s-i-1];
        str[s-i-1]=temp;


    }
    printf("%s",str);

}
int main()
{
    char str[]="my name is who";
    int s=strlen(str);

    reverse (str,s);
}
//--------------------------------wap to calculate the number of the words in the string-------
#include<stdio.h>
void words (char str[])
{
    int count =1;
    for(int i=0;str[i]!='\0';i++)

    {
        if(str[i]==' ')
       count ++;
    }
    printf(" the number of the words are %d",count);

}
int main()
{
    char strr[]="hi iam the king of the free fire";
    words(strr);
}
//----------------------------------------------4 . wap to string is palindrome or not ----------
#include<stdio.h>
#include<string.h>

void palindrome(char str[])
{
    int s=strlen(str),flag=0;
    for(int i=0;i<s/2;i++)
    {
        if(str[i]==str[s-i-1])
        {
            flag++;
        }
    }
    if(flag==s/2)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palidrome");
    }

}
int main()
{
    char str[]="hiih";

    palindrome(str);
}
// --------------------------------------4. 2nd method  palindrome or not ----------------
    #include<stdio.h>
#include<string.h>

void palindrome(char str[])
{
    int s=strlen(str),flag=0;
    for(int i=0;i<s/2;i++)
    {
        if(str[i]!=str[s-i-1])
        {
            printf("not palindrome ");
            return;
        }
    }

        printf("palindrome");

}
int main()
{
    char str[]="hiolih";

    palindrome(str);
}
//----------------------t6  -wap to removve charecter from the string bro----------------
#include<stdio.h>
 void remove_char(char str[],char ch)
 {
    for (int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        for(int j=i;str[j]!='\0';j++)
        {
            str[j]=str[j+1];
            
        }
    }
    //printf("%s",str);
 }
int main()
{
    char str[]="banana";
    char ch;
    scanf("%c",&ch);
    remove_char(str,ch);
     printf("%s",str);
}
     //----------------------t6  2nd method ---wap to removve charecter from the string bro----------------
#include<stdio.h>
 void remove_char(char str[],char ch)
 {
    int j=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch)
        str[j++]=str[i];
        
    }
    str[j]='\0';
    printf("%s",str);
 }
int main()
{
    char str[]="banana";
    char ch;
    scanf("%c",&ch);
    remove_char(str,ch);
    // printf("%s",str);
}
// ----------------------------6.-----copy the string to another string broii--------
#include<stdio.h>
#include<string.h>
void copy (char str1[],char str2[])
{
for(int i=0;str1[i]!='\0';i++)
{
    str2[i]=str1[i];
}
printf("%s",str2);
}

int main()
{
    char str1[]="vivek";
    char str2[strlen(str1)+1];
    copy(str1,str2);
}
// ----------------------------6.--- 2 method by using the strcpy--copy the string to another string broii--------
#include<stdio.h>
#include<string.h>
void copy (char str1[],char str2[])
{
strcpy(str2,str1);
printf("%s",str2);
}

int main()
{
    char str1[]="vivek";
    char str2[strlen(str1)+1];
    copy(str1,str2);
}
//-------------------------7...........--remove the vowels from the string-------------------
#include<stdio.h>
#include<string.h>
void rmvo(char str[])
{int j=0;
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
            str[j++]=str[i];

        }
    }
    str[j]='\0';
    printf("%s",str);

}
int main()
{
    char str[]="helloaeiOU";
    rmvo(str);
}
//---------------------------------- 8.........wap to removethe word from the string broiii--------
#include<stdio.h>
void rmword(char str[])
{
   for (int i=0;str[i]!='\0';i++)
   {
    if ()

   }
}
int main()
{
    char str[]="hy my name is vivek and my package is 8.2lackh"
    rmword(str);
}
//--------------------11.......-wap that the 2 strings are same or not ------------
#include<stdio.h>
#include<string.h>

void compare(char str1[],char str2[])
{
    int count =0;
    for(int i=0;str1[i];i++)
    {
      if (str1[i]==str2[i])
      count++;
    }
    if (count == strlen(str1)&&count ==strlen(str2))
    printf("both strings are the same ");
    else 
    printf("not same both strings");
} 
int main()
{
    char str1[]="hello";
    char str2[]="helo";
    compare(str1,str2);
}
//---------------------------printing the array by practice only ---
#include<stdio.h>
void print (char *arr,int size)
{
    int i;
    // for (i=0;i<size;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    printf("%s",arr);// prints nothig broiiiiii-------------------
}
int main()
{
    char arr[5]={1,3,4,5,6};
    int size=5;
    print(arr,size);

}
#include<stdio.h>
int main()
{
    char st[6]="hello0";
    printf("%s",st);
}*/
//-----------------------------------remove the word fromm the string --------------------------
#include<stdio.h>
void removeword(char str[],char strr[])
{
    int k;
     for (int i=0;str[i]!='\0';i++)
     {
        for(int j=0;strr[j]!=0;j++)
        {
            if(str[i]==strr[j])
            {
                for(int k=0;str[k]!=0;k++)
                {
                    str[k]=str[k+1];
                }
                str[k]='\0';
            }
        }

     }
     printf("%s",str);
}
int main()
{
    char str[]="hello my name is vivek and im boy ";
    char strr[10];
    scanf("%s",strr);
    removeword(str,strr);
}