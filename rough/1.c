#include<stdio.h>

int main()
{
    int a ;
    int n[a=10];

    printf("Array size = %d", a);
    return 0;
}

////ternary 
#include<stdio.h>
int main()
{
    char n;
    printf("enter the number");
    scanf("%c",&n);
    (n>='A'&&n<='Z')?printf("lower case %c",(n+32)):
    (n>='a'&&n<='z')?printf("upper case %c",(n-32)):// why we cannot use the'32' in addition
    printf("%c",n);
}

#include<stdio.h>
int main()
{
    char n;
    printf("enter the number:");
    scanf(" %c",&n);
    (n>='A'&&n<='Z')?printf("Upper case")://$ also digit
    (n>='a'&&n<='z')?printf("lower case"):
    (n>='0'&&n<='9')?printf("digit"):
    printf("special character");

}
//-----------------------------------------check the size and get the out by using the 2 variable ...................20/02/26
#include<stdio.h>
int  print(int arr[],int size)
{
       if (size==0)
       {
      return 0;
       }
       
    

           int j= print(arr,size-1);
            printf("%d ",arr[j]);

    }
int main()
{
    int arr[5]={5,6,7,8,9};
    int size=5;
    print(arr,size);

}
//------------------------------------HW the reverse the array by using the pointer and the refcursion-----------
// -----------------------------------which is the largest digit in the  the pointer and the refcursion------------
//----------------------palinfrome or not ---------------------------------