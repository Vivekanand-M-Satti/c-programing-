// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="hello";
//     printf("%zu\n",sizeof(str));
//     printf("%zu",strlen(str));
// }
//==---------------------------------------manualluuy-------------------
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="hello";
//     int count =1;
//     for(int i=0;i<str[i]!='\0';i++)
//     {
//         count ++;
//     }
//     printf("%d\n",count );
// }

// #include<stdio.h>
// int main()
// {
//     char str[10];
//     scanf("%s",str);
//     printf("%s",str);
// }
// #include<stdio.h>
// int main()
// {
//     char str[10];
//     scanf("%[^\n]",str);
//     printf("%s",str);
// }
// #include <stdio.h>

// int main()
// {
//     char str[5];

//     fgets(str, sizeof(str), stdin);

//     printf("%s", str);
// }
#include<stdio.h>
int main()
{
    char str[10];
    scanf("%[^\0]",str);
    printf("%s",str);
}
