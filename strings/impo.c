
//------------------------------implimentation of the atoi function in the strings-----------------------
#if 0
#include<stdio.h>
int  itas(char *s)
{
    int i,sign=1,integer;
    if(s[0]=='+')
    {
        i++;
    }
    else if (s[0]=='-')
    {
        i++;
        sign=-1;
    }
    if(s[i]=='+'||s[i]=='-')
    {
        return 0;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        integer=integer*10+s[i]-'0';
    }
    return integer*sign;

}
int main()
{
 char str[90];
 scanf("%[^\n]",str);
 printf("%d",itas(str));

    
}
 
#include <stdio.h>
#include<string.h>

void itoaa(int num, char *s)
{
    int i=0,len,temp;
    if(num<0)
    {
        s[i]='-';
        num=-num;
        i++;
    }
    while(num!=0)
    {
        s[i++]=num%10+'0';
        num=num/10;
    }
    s[i]='\0';
    len=strlen(s);
    
    
    for(int j=0;j<len/2;i++)
    {
        temp=s[j];
        s[j]=s[len-i-j];
        s[len-1-i]=temp;
    }
    
    
}

int main()
{
    int num;
    char str[200];

    if(scanf("%d", &num))
    {
       itoaa(num,str);
       printf("%s",str);
    }
    else
    {
        printf("Integer to string is 0");
    }

    
}
    #endif
    #include <stdio.h>
#include<string.h>

void itoaa(int num, char *s)
{
    int i=0,len,temp,flag=0;

    if(num<0)
    {
        s[i]='-';
        num=-num;
        i++;
        flag=1;
    }

    while(num!=0)
    {
        s[i++]=num%10+'0';
        num=num/10;
    }

    s[i]='\0';
    len=strlen(s);

    if(flag==1)
    {
        for(int j=1;j<len/2+1;j++)
        {
            temp=s[j];
            s[j]=s[len-j];
            s[len-j]=temp;
        }
    }
    else
    {
        for(int j=0;j<len/2;j++)
        {
            temp=s[j];
            s[j]=s[len-j-1];
            s[len-j-1]=temp;
        }
    }
}

int main()
{
    int num;
    char str[200];

    if(scanf("%d", &num))
    {
       itoaa(num,str);
       printf("Integer to string is %s",str);
    }
    else
    {
        printf("Integer to string is 0");
    }
}