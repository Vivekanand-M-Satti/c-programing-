/*wap to printfno whivh is divisible by 6 the range of 1 to 10
#include<stdio.h>
int main()

{
    int a ;
    for(a=1;a<=10;a++)
    {
        if(a%6==0)
        {
            printf("%d",a);
            break;
        }
    }

}


//wap to find 7th even no from 1 to 100
#include<stdio.h>
int main()

{
    int a,count=0 ;
    for(a=1;a<=100;a++)
    {
        if(a%2==0)
        {
            count++;// the initially the count is 0 then if its even then it will become increment by one untill it is the 7 then i will sto in the 2nd if condition n prints the n value 
        }
        if (count==7 )
        {
            printf("%d",a);
            break;
        }
    }
}
//wap to find 3rd peimw no in -11 o 1-- //o/p is 5w
///_---------------------------continue___________________---------
//wap to print the prime number between 1 to 100 an
#include<stdio.h>
int main()
{

int j,i,flag;    
    for(j=2;j<100;j++)

    {flag=0;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            printf("%d\n",j);
        }
    }}
    2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
//skip the 5 th prime number 
#include<stdio.h>
int main()
{

int j,i,flag,count=0;    
    for(j=2;j<100;j++)

    {flag=0;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
              count++;// used the 5 th iration to skip the 5 th itration 
              if(count==5)
            {
                continue;
            }
            printf("%d\n",j);
        }
    }}

2
3
5
7
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
#include<stdio.h>
int main()
{
    int i=0,j=0;
    while (i<3)
    {
        while(j<=3)
        {
        printf("%d",j++);
        }
        printf("%d",i++);
    }
    

}