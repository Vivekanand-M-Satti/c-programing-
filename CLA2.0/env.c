#include <stdio.h>

int main(int argc, char *argv[], char *envppp[])
{
    int count=0;
    for(int i = 0; envppp[i] != NULL; i++)
    {
        printf("%s\n", envppp[i]);
        count++;
    }
    printf("%d",count);
    return 0;
}