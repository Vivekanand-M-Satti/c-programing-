#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int poe=2;
    if(n==1)
    {
    printf("%d",1);
    return 0;
    }
    for(int i=1;i<n;i++)
    {
        poe*=2;

    }
    printf("%d",poe);
}