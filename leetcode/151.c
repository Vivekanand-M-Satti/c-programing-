#include<stdio.h>
#include<string.h>
char* reverseWords(char* s) 
{
    char s2[100];
    int end=strlen(s),strt=0;
    if(s[end]==' ')
    {
        end--;
    }
    if(s[strt==' '])
    {
        strt++;
    }
    int k=sizeof(s),j=0;
    for(int i=k;i>=strt;i--)
    {
        if(s[i]==' ')
        {
            for(int m=i+1;s[m]!=' '||s[m]!='\0';m++)
            {
                s2[j++]=s[m];

            }
        }
    }
    s2[j]='\0';
    printf("%s",s2);
    
}
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    reverseWords(str);

}