#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%u\n",arr);
    printf("%u\n",&arr[0]);
    printf("%u\n",&arr);

    printf("%u\n",arr+1);
    printf("%u\n",&arr[0]+1);
    printf("%u\n",&arr+1);
}