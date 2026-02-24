
//////////////-----------------2 definatoin only using the 1 calling --------------------
/*#include<stdio.h>
void sum()
{
    int i,a,sum=0;
    printf("Enter the two values:");
    scanf("%d %d",&i,&a);
    sum=a+i;
    printf(" sum is %d ",sum);
}
void mul()
{
    int i,a,mul=0;
    printf("Enter the two values:");
    scanf("%d %d",&i,&a);
    mul=a*i;
    printf(" sum is %d ",mul);
}

void main()
{
    
    sum();
    mul();
}*/
// 
// #include<stdio.h>


//     void sum (int a, int b);//declaration
//     void sum(int a,int b)
//     {
//         int sum,sub;                  //defination
//         sum=a+b;
//         sub=a-b;
//         printf("sum is %d\n sub is %d",sum,sub);
//     }
//     void main()
//     {
//         sum(4,5);
//         sum(8,9);// calling
//     }
/*
#include<stdio.h>
char  ch(char);

char  main()
{
    char f;
    f=ch('b');
    printf("%c",f+20);
}
char ch(char a)
{
 
    scanf("%c",&a);// but not prints the value b because it over printts by the scanf soo it prints what we give 
    printf("%d",a);
    return a;
}


#include<stdio.h>
void ch(char);

   char main()
{
    char f;
    ch('b');
    printf("%c",f+20);// not return the value because of the void it not take any return values form the functions 
}
void ch(char a)
{
 

    printf("%d",a);

}



#include<stdio.h>


void sum(int a,int i)// have initialize for the one time 
{
    int sum=0;
    ////////////so we can give the value by the using the defination and the call 

   
    sum=a+i;
    printf(" sum is %d ",sum);
}
void  main()
{
    sum(5,6);
}


#include<stdio.h>
void sum (void);/// not giving out put to void it where there is no rerurnn type in the ()
void  main()
{
    sum(5,6);
}


void sum(int a,int i)
{
    int sum=0;
    

   
    sum=a+i;
    printf(" sum is %d ",sum);
}


#include<stdio.h>
void sum (int ,char );/// if we use different data type also it is correct but we have to take them in defination also 
void  main()
{
    sum(5,6);
}


void sum(int a,char i)
{
    int sum=0;
    

   
    sum=a+i;
    printf(" sum is %d ",sum);
}





#include<stdio.h>
void sum ( );/// if we dont use any different data type but inused 
void  main()
{
    sum(5,6);
}


void sum(int a,char i)// here it give the error
{
    int sum=0;
    

   
    sum=a+i;
    printf(" sum is %d ",sum);
}


#include<stdio.h>
void sum ();/// by not taking any datatype here  
void  main()
{
    sum(5,6);
}


void sum(int a,int i) //here we taking the initinalization is give out put 
{
    int sum=0;
    

   
    sum=a+i;
    printf(" sum is %d ",sum);
}



#include<stdio.h>
void sum ();/// by not taking any datatype here  
void  main()
{
    sum(6,7);
}


void sum(char a,char i) //here we taking the initinalization is give out put 
{
    char sum=0;
    

   
    sum=a+i;
    printf(" sum is %d ",sum);
}


#include<stdio.h>
void sum();//decleration 
void  main()
{
    int x=4,y=9;
    sum(x,y);
}

void sum(int a,int i)
{
    int sum=0;
   
    sum=a+i;
    printf(" sum is %d ",sum);
}*/
#include<stdio.h>
void sum ();/// by not taking any datatype here  
void  main()
{
    int c,a;
     a=scanf("%d",&c);
    printf("%d",a);
}


void sum(void) //here we taking the initinalization is give out put 
{
    char sum='0';
    

   
    //sum=a+i;
    printf(" sum is %d ",sum);
}










