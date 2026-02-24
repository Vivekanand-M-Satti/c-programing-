#include<stdio.h>
int main()
{
    int a [10],odd_count=0,even_count=0,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("the even count is %d \n",even_count);
    printf("the odd count is the %d \n",odd_count);
    
}//-----Find sum and average of the marks by using the  array elements--------------------