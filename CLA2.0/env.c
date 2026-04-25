#if 0 
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[], char *envppp[])
{
    int count=0;
setenv("she","loves me",0);
setenv("i","loves me",0);

    for(int i = 0; envppp[i] != NULL; i++)
    {
        printf("%s\n", envppp[i]);
        count++;
    }
    printf("%d",count);
    return 0;
}
#endif
// use this bcs not working that upper sides soo
#include <stdio.h>
#include<stdlib.h>

int main( )
{
     extern char **environ;
    int count=0;
setenv("she","loves me",1);
setenv("i","loves me",1);

    for(int i = 0; environ[i] != NULL; i++)
    {
        printf("%s\n", environ[i]);
        count++;
    }
    printf("%d",count);
    return 0;
}