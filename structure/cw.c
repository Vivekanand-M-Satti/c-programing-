#include<stdio.h>
struct student 
{
    char name[200];
    int m;
    int p;
    int c;
};
int main()
{
    int n,i,sump=0,summ=0,sumc=0;
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name of the student :\n");
        scanf("%s",s[i].name);
        printf("Enter marks p c m of student ");
        scanf("%d %d %d",&s[i].m,&s[i].p,&s[i].c);
    }
    printf("name maths physics chemistry\n");
    for(i=0;i<n;i++)
    {
    printf("%s %d %d %d ",s[i].name , s[i].m ,s[i].p  ,s[i].c );
    summ+=s[i].m;
    sump+=s[i].p;
    sumc+=s[i].c;
    }
    
    
   printf("average is %d %d %d ",summ/n ,sump/n , sumc/n); 
}