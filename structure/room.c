// //----------------------------------------call by value of the structure---------------

// #if 0
// #include<stdio.h>
// struct std
//     {
//         int id;
//         char name[49];
//         char add[29];
//     };
//     void call(struct std v)
//     {
//         v.id=98;// take another memory as usual the std by and give tthe value 98;// so  bby the call by value the 
//         printf("%d",v.id);
//     }
// int main()
// {
//     struct std s={90};
//     call(s);
//     printf("%d",s.id);






// }
// #endif
// #if 0
// #include<stdio.h>
// struct std
//     {
//         int id;
//         char name[49];
//         char add[29];
//     };
//     void call(struct std *v)
//     {
//         (*v).id=98;//
//         printf("%d",v->id);
//     }
// int main()
// {
//     struct std s={90};
//     call(&s);
//     printf("%d",s.id);






// }
//     #endif
//     //------------------------------- wap the program by usinng the array of the structure -----------
// //     #include<stdio.h>
// //     struct stu
// //     {
// //         int id;
// //      char name [39];
// //      char add[89];
// //     };
    
    
// //  void read(struct stu*s,int size)
// //  {
// //     for(int i=0;i<size;i++)
// //     {
// //         scanf("%d%s%s",&s[i].id,s[i].name,s[i].add);
// //     }
// //  }
// //  void print(struct stu * s,int size)
// //  {
// //      for(int i=0;i<size;i++)
// //     {
// //         printf("%d\t%s\t%s",s[i].id,s[i].name,s[i].add);
// //     }

// //  }
// //     int main()
// //     {
// //         struct stu s1[2];
// //         read(s1,2);
// //         print(s1,2);
// //     }
// //---------------------------------array of the structure without using the []
// #include<stdio.h>

// struct stu
// {
//     int id;
//     char name[39];
//     char add[89];
// };

// void read(struct stu *s,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d %s %s",&(s+i)->id,(s+i)->name,(s+i)->add);
//     }
// }

// void print(struct stu *s,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         printf("%d\t%s\t%s\n",(s+i)->id,(s+i)->name,(s+i)->add);
//     }
// }

// int main()
// {
//     struct stu s1[2];

//     read(s1,2);
//     print(s1,2);
// }
//-----------------------------------------------------------------nested structure----------
#include <stdio.h>
#include <string.h>

struct school
{
    struct stu
    {
        int roll;
        char name[90];
    } student; // declare a variable of struct stu

    struct
    {
        int id;
        char name[59];
    } faculty; // anonymous struct variable
};

int main()
{
    struct school s1;
    
    // Input student info
    printf("Enter student roll and name:\n");
    scanf("%d", &s1.student.roll);
    scanf(" %[^\n]", s1.student.name); // read string with spaces

    // Input faculty info
    printf("Enter faculty id and name:\n");
    scanf("%d", &s1.faculty.id);
    scanf(" %[^\n]", s1.faculty.name);

    // Print
    printf("\nStudent info:\n");
    printf("Roll: %d\n", s1.student.roll);
    printf("Name: %s\n", s1.student.name);

    printf("\nFaculty info:\n");
    printf("ID: %d\n", s1.faculty.id);
    printf("Name: %s\n", s1.faculty.name);

    return 0;
}
