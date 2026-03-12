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
// #include<stdio.h>
// struct student
// {
//   int id;
//   char name[49];
//   char  address[90];
// };
// void print(struct student s[])
// {
//     printf("%d\n %s\n %s\n",s->id,s->name,s->address);
// }
// //void read (sturct student * )
// int main()
// {
//     struct student s[5];
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d %s %s",&s[i].id,s[i].name,s[i].address);
//         print(s);
//     }
// }
//
//---------------------------------------------------nested structure -----------
 #include<stdio.h>
// struct address
// {
//    char addresss[29];
//    double zip;
    
// };
struct student
{
    char name[17];
    int roll;
    char nn[17];
    int g;
    //struct address add;
    
};
int main()
{
    struct student stud1={"VIVEK",69,"BELAGVAI",1234};
    //printf("%s\n %d\n %s\n %d\n",stud1.name, stud1.roll, stud1.add.addresss, stud1.add.zip);
    struct student stud2;
    // scanf("%s",stud2.name);
    // scanf("%d",&stud2.roll);
    // scanf("%s",stud2.add.addresss);
    // scanf("%d",&stud2.add.zip);
    // printf("%s\n %d\n %s\n %d\n", stud2.name, stud2.roll, stud2.add.addresss, stud2.add.zip);
    printf("%zu\t",sizeof(struct student));// check this after .
    
}