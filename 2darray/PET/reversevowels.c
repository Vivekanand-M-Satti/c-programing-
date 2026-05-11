#include<stdio.h>
#include<string.h>

int main()
{
    char str[20], str2[10];
    
    int str3[10];  
    scanf("%s", str);

    int j = 0, k = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='e'||str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='E'||str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            str2[j++] = str[i];
            str3[k++] = i;
        }
    }

    str2[j] = '\0';

    int l = 0;
    for(int i = k - 1; i >= 0; i--)
    {
        str[str3[i]] = str2[l++];
    }

    printf("%s\n", str);
}
