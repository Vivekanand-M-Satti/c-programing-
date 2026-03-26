// example 06 in the ppt 
#include<stdio.h>
int main()
{
    int i=0;
    {
        int j=0;
        printf("%d",i);
    }
    printf("%d",j);//ANSWER IS - shows the error:undeclared 
    //--becausee it delclred in on another in and out  it is auto variable so thats why the life time of that is only in between
    // the start and the exit so it is the exited after} okay boosss clear ?
}