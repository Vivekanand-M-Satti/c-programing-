// -------------------------pass by the reference--------------------------


// #include<stdio.h>
// struct student
//  {
// int id;
// char name[40];
// char address[100];

// };
// void date (struct student *s)
// {
//     s->id=10;
// }
// int main()
// {
//     struct student s1;
//     date(&s1);
//     printf("%d",s1.id);
// }
//----------------------------------------                     returnong the structure after intialization 
// #include<stdio.h>
// struct studeent
// {
//   int id;
//   char name[49];
//   char  address[90];
// };
// struct student data()
// {
//     struct student s={10,"vivek","belagavi"};
// }
//--------------------------------------------------array of structure --------
#include<stdio.h>
struct student
{
  int id;
  char name[49];
  char  address[90];
};
void print(struct student s[])
{
    printf("%d\n %s\n %s\n",s->id,s->name,s->address);
}
//void read (sturct student * )
int main()
{
    struct student s[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d %s %s",&s[i].id,s[i].name,s[i].address);
        print(s);
    }
}