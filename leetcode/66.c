/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize);
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    plusOne(ar,5);
}
int* plusOne(int* digits, int digitsSize)
 {
    if(digits[digitsSize-1] == 9)
    {
        digitsSize+=1;
    digits = malloc ((digitsSize)*sizeof(int));
    digits[digitsSize-2]=1,digits[digitsSize-1]=0;
    }
    else
    {
    digits = malloc (digitsSize*sizeof(int));
    digits[digitsSize-1]+=1;
    }   
    unsigned int i=sizeof(digits);
    for(int k=0;k<i;k++)
    {
        printf("%d ",digits[i]);
    }
    
}