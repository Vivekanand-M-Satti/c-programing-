/*#include<stdio.h>
int main ()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
  


#include<stdio.h>
int main ()
{
    int i=1;
    while(i=1)//go infinity becuse it =is assignment operarion insted of using ==  
    {
        printf("%d\n",i);
        i++;
    }
    printf("end of program\n");
}
#include<stdio.h>
int main ()
{
    int i=1;
    while(i)
    {
        printf("%d\n");//infinite loop condition is i so in that every time i=1 then contition runs infinity times 
        i++;
    }
}


#include<stdio.h>
int main()
{
    int i;
    while(i<=10)
    {
        printf("%d",i);// not print any i value becase we not given any initialization 
    i++;
}
printf("end of the program");
} 



#include<stdio.h>
int main()
{
    int i=0;
    while(++i)
    {
        printf("%d\n",i);//it go for far beacuse in while 0 is pre incremented then i will++ every number to previous number 
}
printf("end of the program");
}



#include<stdio.h>
int main()
{
    int i=0;
    while(i++);// it dont print any value beacuse here 0 is post incremented in while 0 remains 0 in while () while (0) false so come end of prgrm
    {
        printf("%d",i);
}
printf("end of the program");
}



#include<stdio.h>
int main()
{
    int i=0;
    while(++i);// it dont print any value beacuse here the gave ; to the while loop so the while loop is empty then it prints i=0 not considers the while loop
    {
        printf("%d",i);
}
printf("end of the program");
}

//_______________________________________------------by using charecter-------_____________________
#include<stdio.h>
int main()
{
    char i='a';
    while(i)
    {
        printf("%d\n",i);//97 98 ...127 to -128 -127 to -1_____________------op
        i ++;
}
printf("end of the program");
}



#include<stdio.h>
int main()
{
    char i='a';
    while(i)
    {
        printf("%d\n",i);//_________----prints only 97 96 to 1 afeter 0 the while (0) will become false
        i --;
}
printf("end of the program");
}

//_________________----------------classs---------------____________________

#include<stdio.h>
int main()
{
    int  password=1234;
    int pass=0;
    printf("enter the passwoed");
    scanf("%d",&pass);
    while(pass!=password)
    {
        printf("error: try again:");//-------password
        scanf("%d",&pass);//study this also
    }
    printf("success\n");

}



#include<stdio.h>
int main()
{
    int i=1;
    int num =1, count=0;
    printf("enter the number ");
    scanf("%d",&num);
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
    {
        printf("the number is prime number ");// _____________________-------------prime number-------_______________
    }
    else
    {
        printf("the number is not prime number ");
    }
}
#include<stdio.h>
int main()
{
    int factorial=1,i=1,num;
    printf("enter the value of num");// _________________________-----------factorial number ----------------_____________
    scanf("%d",&num);
    while(i<=num)
    {
        factorial=factorial*i;
    
    i++;
}
printf("%d",factorial);
}

#include <stdio.h>

int main() 
{
    int num,i=1;
    printf("enter the num");
    scanf("%d",&num);
while(i<=10)
{
    printf("%d x %d=%d\n",num,i,num*i);//-----_________--talbles n x n= N

    i++;
}
}


//--------_________sum of digit fro, number 
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("enter the value of num");
    scanf("%d",&num);
    int sum=0;
    while(i<=num)
    {
sum=sum+i;
i++;
    }
    printf("the sum of digit is %d",sum);
}

//_______________________________________________----------------sum of even numbers --------___________________
#include<stdio.h>
int main()
{
    int i=2,sum=0;
    int num ;
    printf("enter the value num ");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
       i= i+2;
    }
    printf("the sum even numbers is %d",sum);
}    
//---------________________________----------palindrome 
#include <stdio.h>
int main()
{
    int num, temp, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;   // store original number

    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (temp == rev)
        printf("The number is Palindrome");
    else
        printf("The number is Not Palindrome");

    return 0;
} 
///--------------------------------________------perpect numberrrrr------
#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == num)
        printf("The number is a Perfect Number");
    else
        printf("The number is Not a Perfect Number");

    return 0;
}
//_______________________________---------factorial -checkkkkk------___________
#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;   // store original number

    while (num != 0)
    {
        digit = num % 10;

        fact = 1;
        i = 1;
        while (i <= digit)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == temp)
        printf("The number is a Strong Number");
    else
        printf("The number is Not a Strong Number");

    return 0;
}
#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == num)
        printf("The number is a Perfect Number");
    else
        printf("The number is Not a Perfect Number");
 #include<stdio.h>
int main()
{
    int i=1;
    while(i>=100)
    {
        if(i%3==0&&i%5==0)
        {
        printf("fizz Buzz");
        }
        else if(i%5==0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d",i);
        }
        i++;
    }
}*/
////////////////////////////////////////////////-----------------------------------------------HOME WORK PDF---------------------------------////////////////////////////////////////////
////////////////////////////////////////////////////////////////
//Print Numbers from 1 to 5
/*#include<stdio.h>
int main()

{
    int count=1;
    while (count<=5)
    {
        printf("%d ", count);
        count++;
    }
    printf("\n");
}
*/

//Write a program to calculate the sum of first 10 natural numbers using a while loop.
/*
{
    int i=1, count=0;
    while (i<=10)
    {
        count=count+i;
        i++;
    }
    printf("%d\n", count);
}
*/

//Print Even Numbers from 1 to 10
/*
{
    int i=1;
    while(i<=10)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        i++; 
    }   
}
*/

//Write a program to reverse a number using a while loop. (Example input: 1234)
/*
{
    int n, rem, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d\n", rev);
}
*/

//Write a program to count the number of digits in a given number using a while loop.
/*
{
    int n, rem, count=0;
    printf("Enter the number: ");//7654
    scanf("%d", &n);

    if (n==0)
    {
        count=1;
    }
    
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d\n", count);
}
*/

//Display all factors of a number using a while loop. (Input: 12)
/*
{
    int n, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==0)
    {
        printf("Factor is 0\n");
    }

    while (i<=n)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
}
*/

//Count how many times a digit appears in a number. (check for digit = 3)
/*
{
    int n, rem, digit, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the digit to check: ");
    scanf("%d", &rem);

    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        if (digit==rem)
        {
            count++;
        }
    }
    printf("Digit %d appears %d times\n", rem, count);
}
*/

//Write a program to calculate the factorial of a number using a while loop. (Example input: 5)
/*
{
    int n, fact=1, i=1;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n==0)
    {
        fact=1;
    }
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d\n", fact);
}
*/

//Write a program to check if a number is a palindrome using a while loop. (Example input: 121)
/*
{
    int n, rem, temp, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (temp==rev)
    {
        printf("%d is a palindrome number\n", temp);
    }
    else
    {
        printf("%d is not a palindrome number\n", temp);
    }

}
*/

//Write a program to find the sum of digits of a number using a while loop. (Example input: 345)
/*
{
    int n, sum=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d\n", sum);
}
*/

//Write a program to find the sum of even digits in a number using a while loop. (Input: 2467)
/*
{
    int n, sum=0, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        digit=n%10;
        if (digit%2==0)
        {
            sum=sum+digit;
        }
        n=n/10;
    }
    printf("%d\n", sum);
}


//Write a program to calculate the result of base^exponent using a while loop. (Input: base = 2, exponent = 4)

{
    int base, exp, temp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    temp=base;

    while(exp-1>0)
    {
        base=base*temp;
        exp--;
    }
    printf("%d\n", base);
}
//------------------------------------14/02/2026---------------------------
//////////////////////sum of the n natural numbers by while loop -------------------------
#include<stdio.h>
int main()
{
    int n,sum=0 ;
    int i=1;
    scanf("%d",&n);
    while(i<=n)
    {
      sum=sum+i;
      i++;
    }
    printf("%d",sum);
}
//#
#include<stdio.h>
int main()
{
    int i=2;
    int n;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i+=2;

    }

}
///======================---------------------------------reverse the number and check that is palindrome or not-----------------------------------------------------
#include<stdio.h>
int main()
{
    int a,rev=0;

    scanf("%d",&a);
    int temp=a;
    while(a!=0)
    {
       rev =rev*10+(a%10);
       a/=10;
    }
    printf(" reverse number is %d ",rev);
    if (temp==rev)
    {
        printf(" %d palindrome nubmer",rev);
    }
    else 
    {
        printf("not palindrome ");
    }
}
#include<stdio.h>
int main()
{
    int a,rev=0,count=0;

    scanf("%d",&a);
    int temp=a;
    while(a!=0)
    {
       rev =rev*10+(a%10);
       count++;
       a/=10;
    }
    printf(" count is  %d \n",count);
    if (temp==rev)
    {
        printf(" %d palindrome nubmer",rev);
    }
    else 
    {
        printf("not palindrome ");
    }
}
// ------------------------------------------------------------check the factors of the number=========--------------------------
#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    while(i<=a)
    {
        if (a%i==0)
        {
            printf("%d ",i);
        }
        i++;

    }
}
//----------------------------------------------------frequency of the number -----------------------------------------
#include<stdio.h>
int main()
{
    int a,n;
    int digit=1,count=0;
    printf("enter the a number \n");
    scanf("%d",&a);
    printf("ente the checking number :\n ");
    scanf("%d",&n);
    while(a>0)
    {
        digit=a%10;
        if (digit==n)
        {
            count++;
        }
        a/=10;
    }
    printf("the number of the %d of is %d",n,count);
    
}
//--------------------------------------------------------calculate the factorial of the number is ---------------------------
#include<stdio.h>
int main()
{
    int a,i=1,sum=1;
    scanf("%d",&a);
    while( i<=a)
    {
         sum=sum*i;
         i++;
    }
    printf("%d",sum );
}
//--------------------------------------------------Sum of Digits of a Numbe
#include<stdio.h>
int main()
{
    int a,rev=0,count=0;

    scanf("%d",&a);
    int temp=a;
    while(a!=0)
    {
       rev =(a%10);
       count+=rev;
       a/=10;
    }
    printf(" sum of the digit of the number %d \n",count);
    
}
//-------------------------------------------------------------------Sum of Even Digits in a Number-------------------------------------------
#include<stdio.h>
int main()
{
    int a,rev=0,count=0;

    scanf("%d",&a);
    int temp=a;
    while(a!=0)
    {
       rev =(a%10);
       if (rev%2==0)
       count+=rev;
       a/=10;
    }
    printf(" sum of the digit of the number %d \n",count);
    
}
//-----------------------------------------------------------------calculate the power of the number---------------------------------
#include<stdio.h>
int main()
{
      
     int a ,b,i=1,c=1;
     scanf("%d%d",&a,&b);
     while(i<=b)
     {
        c*=a;
        i++;
     }
     printf("%d",c);
}*/



