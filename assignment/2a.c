#include<stdio.h>
int main()
{
  int start;
  int N,day;
  printf("enter the N and start:");
  scanf("%d %d",&start,&N);
  if((start<8 && N<366)&&(start>=0 && N>=0))
  {

        day = ((start+N-1) % 7);//we cannot use any if condition because in if condition it only check condition but its not assign value any variable
        
  {
  switch(day)
  
  {
  case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednsday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
    break;
    case 0:
    printf("satrday");
    break;

  }}
else{
printf("enter the number in range ");
}}


#include<stdio.h>
int main()
{
  int num ,add=0;
  printf("enter the number ");
  scanf("%d",&num);
  if (num<0 )
  {
    printf("the number is invalid");
    
  }
  for (int i=1;i<=num/2;i++)
  {
    if(num%i==0)
    {
      add=add+i;
    }
  }
if(num == add)
{
  printf("this num is perfect number");
}
else
{
  printf("number is not perfect");
}

  }
  #include <stdio.h>
int main()
{
int num1 = 6 * 4 + 4;
num1--;
num1++;
int res = num1++;

num1 = res;
num1++;
res = !(num1);
printf("The res is : %d\n",res);
printf("The num1 is : %d\n",num1);
}
