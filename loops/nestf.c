/*syntax
for(i;condtion;update)
{
    //statment;
    for(initioalisation;condition;update)
    {
        //statment;
    }
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d\n",j);
        }
    }
}#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d\n",j+i);
        }
    }
}
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
{

int j;    char i='A';
    for(j=1;j<=4;j++)
    {
        for(i='A';i<='D';i++)
        {
            printf(" %c ",i);
        }
        printf("\n");
    }
}}
*/
#include<stdio.h>
int main(){
{

int j,i;    char cg ='A';
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=3;i++)
        {
            printf(" %c ",cg);
            cg++;

        }
        printf("\n");
    }
}}