
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

    
}#endif
