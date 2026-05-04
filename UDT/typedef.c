typedef int arr[10];
#include<stdio.h>
int main()
{
    arr array;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("%zu\n",sizeof(array));
    for(int i=0;i<10;i++)
    {
        printf("%d",array[i]);
    }


}