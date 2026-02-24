// #include<stdio.h>
// int main ()
// {
//     for (int i=1;i<=4;i++)
//     {
//         for (int j=1;j<=4;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }
/*#include<stdio.h>
int main ()
{
    int num=0;
    for (int i=1;i<=4;i++)
    {
        for ( int j=1;j<=4;j++)
        {
        num++;
        printf(" %d ",num);
    
        }
        printf("\n");

    }
}
#include<stdio.h>
int main ()
{
    int num=0;
    for (int i=5;i>0;i--)
    {
        for ( int j=1;j<=4;j++)
        {
        printf(" %d ",i-j);
    
        }
        printf("\n");

    }
}
#include<stdio.h>
int main ()
{
    int num,i;
     printf("enter the value of num");//
     scanf("%d",&num);
    for (i=num+1;i>0;i--)
    {
        for ( int j=1;j<=4;j++)
        {
        printf(" %d ",i-j);
    
        }
        printf("\n");

    }
}
    5  4  3  2
 4  3  2  1
 3  2  1  0
 2  1  0  -1
 1  0  -1  -2
 0  -1  -2  -3

 

#include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=4;i++)
    {
        for ( int j=1;j<=i;j++)
        {
        printf(" %d ",j);
    
        }
        printf("\n");

    }
}
1 
 1  2 
 1  2  3 
 1  2  3  4 
 #include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=4;i++)
    {
        for ( int j=1;j<=i;j++)
        {
        printf(" %d ",j);
    
        }
        printf("\n");

    }
}
    1 
 2  2
 3  3  3
 4  4  4  4


 #include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=4;i++)
    {
        for ( int j=1;j<=i;j++)
        {
        printf("*");
    
        }
        printf("\n");

    }
}
*
**
***
****_____________________________----------------


#include<stdio.h>
int main ()
{
    int i,j;
    for (i=4;i>0;i--)
    {
        for (j=1;j<=i;j++)
        {
        printf("*");
    
        }
        printf("\n");

    }
}
****
***
**
* 
t immediately sends control to start of loop

 It SKIPS everything below it
#include<stdio.h>
int main(){
{

int j,i;    char cg ='A';
    for(j=1;j<=7;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf(" %c ",cg);
            cg++;

        }
        printf("\n");
    }
}}
A 
 B  C
 D  E  F
 G  H  I  J
 K  L  M  N  O
 P  Q  R  S  T  U
 V  W  X  Y  Z  [  \



 #include<stdio.h>
int main(){
{

int j,i;    int cg =1;
    for(j=1;j<=7;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf(" %d ",cg);
            cg++;

        }
        printf("\n");
    }
}}
1 
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15
 16  17  18  19  20  21
 22  23  24  25  26  27  28


 #include<stdio.h>
int main(){
{

int j,i;    int cg =15;
    for(j=1;j<=7;jz++)
    {
        for(i=1;i<=j;i++)
        {
            printf(" %d ",cg);
            cg--;

        }
        printf("\n");
    }
}}
15 
 14  13
 12  11  10
 9  8  7  6
 5  4  3  2  1
 0  -1  -2  -3  -4  -5
 -6  -7  -8  -9  -10  -11  -12
#include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=4;i++)
    {
        for ( int j=1;j<=i;j++)
        {
        printf(" %d ",i);
    
        }
        printf("\n");

    }
}


#include<stdio.h>
int main(){
{

int j,i;    char cg ='A';
    for(j=1;j<=7;j++)
    {
        cg='A';
        for(i=1;i<=4;i++)
        {
            printf(" %c ",cg);
cg++;
        }
        printf("\n");
    }
}}
A  B  C  D 
 A  B  C  D
 A  B  C  D
 A  B  C  D
 A  B  C  D
 A  B  C  D
 A  B  C  D

 #include<stdio.h>
int main(){
{

int j,i;    char cg ='A';
    for(j=0;j<=4;j++)
    {
        cg='A'+j;
        for(i=1;i<=4;i++)
        {
            printf(" %c ",cg);
cg++;
        }
        printf("\n");
    }
}}
A  B  C  D 
 B  C  D  E
 C  D  E  F
 D  E  F  G
 E  F  G  H
 #include<stdio.h>
int main(){
{

int j,i;    char cg ='A';
    for(j=0;j<=4;j++)
    {
        cg='A'+j;
        for(i=1;i<=4;i++)
        {
            printf(" %c ",cg);
        }
        printf("\n");
        cg++;
    }
}}
A  A  A  A 
 B  B  B  B
 C  C  C  C
 D  D  D  D
 E  E  E  E



#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=4;i++)
        {
            if(i+j==n+1)// if the i=strts from j=1 and i = 1 then take th if (i+j==n-1)
            {
            printf(" *");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}}
___ *
__ *_
_ *__
 *___      




#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=0;j<n;j++)
    {
        for(i=0;i<4;i++)
        {
            if(i+j==n-1)//if the i=0 ,j=0 strts then take i+j==n-1
            {
            printf(" *");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}}
___ *
__ *_
_ *__
 *___

 
#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=0;j<n;j++)
    {
        for(i=0;i<4;i++)
        {
            if((i+j)%2==0)//if the i=0 ,j=0 strts then take i+j==n-1
            {
            printf(" *");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}}
 *_ *_
_ *_ *
 *_ *_
_ *_ *



#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if((i+j)%2==0)//if the i=0 ,j=0 strts then take i+j==n-1
            {
            printf("%d",i+j);
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
}}
2_4_
_4_6
4_6_
_6_8


#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n*2-1;i++)
        {
            if(i>=n-j+1 && i<=n+j-1)//if the i=0 ,j=0 strts then take i+j==n-1
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}}
   *   
  ***
 *****
*******


#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n*2-1;i++)
        {
            if(i>=n-j+1 && i<=n+j-1)//if the i=0 ,j=0 strts then take i+j==n-1
            {
            printf("*");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}}
      *      
    ***    
  *****  
*******
#include<stdio.h>
int main(){
{

int j,i,n=4;  
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(i<=j)//by using if else condition 
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}}
*   
**
***
**** 

#include<stdio.h>
int main ()
{
    int i,j;
    for (i=4;i>0;i--)
    {
        for (j=1;j<=i;j++)
        {
        printf(" ");
    
        }
        printf("*\n");

    }
}
    *
   *
  *
 *
 * 
#include<stdio.h>
int main ()
{
    int i,j;
    char ch= 'A';

    for (i=0;i<4;i++)
    {
        ch='A'+i;
        for (j=1;j<=4;j++)
        {
        if(j<=4/2)
        {
        printf("%c",ch);
        ch++;
    
        }
        else
        {
            ch--;
            printf("%c",ch);//we have to write the ch -- above beacuse it s become c before lefting if it come as c to else broo
        }}
        printf("\n");

    }
}
ABBA
BCCB
CDDC
DEED


#include<stdio.h>
int main ()
{
    int i,j;
    char ch= 'A';

    for (i=0;i<4;i++)
    {
        ch='A'+i;
        for (j=1;j<=4;j++)
        {
        if(j<=4/2)
        {
        printf("%c",ch);
    
        }
        else
        {
            ch++;
            printf("%c",ch);
            ch--;//we have to ch-- because here becuse its + inthe loop so we have to decrement that with in that only broooooooooo!!
        }}
        printf("\n");

    }
}
AABB
BBCC
CCDD
DDEE
*/
