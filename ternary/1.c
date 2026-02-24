//=--------------------------------------------Example 1: WAP to check the character is uppercase or lowercas

/*#include<stdio.h>
int main()
{
char alp;
printf("Enter the alpabet: ");
scanf("%c",&alp);
(alp>='A'&&alp<='Z')?printf("the charecter is upper case"):
(alp>='a'&&alp<='z')?printf("the charecter is lower case "):
printf("not an alpabet");

}



----------------------------------------------------Example 2: WAP to check if Number is Multiple of 10-----------------------
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    (n%10==0)?printf("multiply by 10"):printf("not multiply by 10");

}

//------------------------------//------------Example 3 : WAPtocheck if Number Lies Within a Range 0 to 10-----------------
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    (n>=0&&n<=10)?printf("with in the range"):printf("out of range");

}
///-------------------------------------------Example 4: Convert Uppercase Character to Lowercase Using Ternary Operator------------------------
#include<stdio.h>
int main()
{
    char n;
    printf("enter the number");
    scanf("%c",&n);
    (n>='A'&&n<='Z')?printf("lower case %c",(n+32)):
    (n>='a'&&n<='z')?printf("upper case %c",(n-32)):
    printf("%c",n);

}
//---------==============--------------------------------------------Example 5: Character Classification
#include<stdio.h>
int main()
{
    char n;
    printf("enter the number:");
    scanf(" %c",&n);
    (n>='A'&&n<='Z')?printf("Upper case"):
    (n>='a'&&n<='z')?printf("lower case"):
    (n>='0'&&n<='9')?printf("digit"):
    printf("special character");

}

///----------------------------------------Example 6: Character Case Conversion-------------------
#include<stdio.h>
int main()
{
    char n;
    printf("enter the charecter");
    scanf("%c",&n);
    (n>='A'&&n<='Z')?printf("converted charecter  %c",(n+32)):
    (n>='a'&&n<='z')?printf("converted chareceter  %c",(n-32)):
    printf("%c",n);

}

// ///---------------------------------------------------------------Example 7: Determine Quadrant of a Point--------------
#include<stdio.h>
int main()
{
int n,m;
    printf("enter the numbers n and m");
    scanf("%d%d",&m,&n);
    (m > 0 && n > 0) ? printf("Point lies in: Quadrant I"):
    (m < 0 && n > 0) ? printf("Point lies in: Quadrant 2"):
    (m < 0 && n < 0) ? printf("Point lies in: Quadrant 3"):
    (m > 0 && n < 0) ? printf("Point lies in: Quadrant 4"):
    (m == 0 && n > 0) ? printf("lieson the y axis "):
    (m> 0 && n == 0) ? printf("lieson the y axis "):
     printf("lies at center of the axis ");
}
     ----------------------------------------------------------Example 8: Employee Bonus Calculation------------------------------
#include<stdio.h>
int main()
{
    float salary, bonus;
    int exp;

    printf("Enter salary and experience: ");
    scanf("%f %d", &salary, &exp);

    bonus = (exp >= 10) ? salary * 0.15 :
            (exp >= 5)  ? salary * 0.10 :
                          salary * 0.05;

    printf("Bonus: ₹%.0f", bonus);

    return 0;
}

               ///-------------------------Example 9 : Return Square If Number Is Even, Else Cube------------------
#include<stdio.h>
int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = (n % 2 == 0) ? n * n : n * n * n;

    printf("Result: %d", result);

    return 0;
}*/
    //----------------------------------------------------Example 10: find the maximum of three given integers------------
    #include<stdio.h>
int main()
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a >= b && a >= c) ? a :
          (b >= a && b >= c) ? b :
                               c;

    printf("%d", max);

    return 0;
}

