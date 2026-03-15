// #include<stdio.h>
// int main ()
// {
//     int a=0,i,b=1,c=0;
//     printf("enter the number");
//     scanf("%d0",);
//     while( i<=num1;i++)
//     {
//         printf("%d\n",a);
//         c=a+b;
//         c=b;
//         b=a;
//     }
// }
#include <stdio.h>

char *my_strtok(char *str, const char *delim)
{
    static char *ptr;
    int i;

    if (str != NULL)
        ptr = str;

    if (ptr == NULL)
        return NULL;

    //Skip delimiters 
    while (*ptr)
    {
        for (i = 0; delim[i]; i++)
        {
            if (*ptr == delim[i])
                break;
        }

        if (delim[i] == '\0')
            break;

        ptr++;
    }

    if (*ptr == '\0')
        return NULL;

    char *start = ptr;

    /* Find next delimiter */
    while (*ptr)
    {
        for (i = 0; delim[i]; i++)
        {
            if (*ptr == delim[i])
            {
                *ptr = '\n';   // replace delimiter with newline
                ptr++;
                return start;
            }
        }
        ptr++;
    }

    return start;
}

int main()
{
    char str1[100];
    char str2[50];
    char *token;

    printf("Enter string1 : ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter string2 : ");
    scanf("%[^\n]", str2);

    token = my_strtok(str1, str2);

    printf("Tokens :\n");

    while (token != NULL)
    {
        /* Print token until newline */
        while (*token && *token != '\n')
        {
            printf("%c", *token);
            token++;
        }
        printf("\n");

        token = my_strtok(NULL, str2);
    }

    return 0;
}
