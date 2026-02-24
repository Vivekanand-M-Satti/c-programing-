/*#include<stdio.h>
int main()
{
    int  i=1, sum=0;
    for(;i<=30; i++)
    {
        sum=sum+i;
    }
        printf("%d",sum);
    
}
#include<stdio.h>
int main()
{
    int i , j;
    for(i=1;i>=5; i--)
    { 
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        
        printf("\n");
    } 
}



#include<stdio.h>
int main()
{
 int num,i;
 printf("enter the value of num:");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
 {
    printf("%d X %d =%d\n",num,i,num*i);//________________--tables like 2X1=2
 }

}



#include<stdio.h>
int main()
{
 int fact=1,num;
 printf("enter the value of fact:");// practice in pg another method
 scanf("%d",&num);
 for(int i=num;i<=10;i++)
 {
    fact=fact*i;

}
printf("%d",fact);
}


#include<stdio.h>
int main()
{
 int num,i;
 int count=0; 
 printf("enter the num")
 for(i=1;i<=10;i++)
 {
    printf("%d X %d =%d\n",num,i,num*i);
 }
//_____________________________prime number too cheack
}
 

---------------_____________class_______-----
#include<stdio.h>
int main()
{
    int count=0;
    int num,i;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        count++;
    }}
    if (count==2)
    {
        printf("the number is the prime number ");/////////////---prime number 
    }
    else 
    {
        printf("the number is not prime number");
    }
}


#include<stdio.h>
int main()
{
    int fact=1,i,num;
    printf("enter the num");/////////------------factorial 
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
fact=fact*i;
    }
    printf("%d",fact);

} 
#include<stdio.h>
int main()
{
    int password=1234;
    int pass=1;
    printf("enter the value of pass");//---------_______________.>password
    scanf("%d",&pass);
    for(;pass!=password;)
    {
        printf("enter password again ");
        scanf("%d",&pass);
    }
    printf("succusses");
0=
}*/
