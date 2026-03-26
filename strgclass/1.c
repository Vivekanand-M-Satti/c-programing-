// -------------------------------------------example 06 in the ppt 
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     {
//         int j=0;
//         printf("%d",i);
//     }
//     printf("%d",j);//ANSWER IS - shows the error:undeclared 
//     //--becausee it delclred in on another in and out  it is auto variable so thats why the life time of that is only in between
//     // the start and the exit so it is the exited after} okay boosss clear ?
// }
//----------------------------------------------example 07 in the ppt
// #include<stdio.h>
// int main()
// {
//     int i=8;
//     {
//         int j=9;
//         printf("%d",j);
//     }
//     printf("%d",j);// it is also same as the undeclared of the j in  main in out before that only it is terminating bro ..
// }
// --------------------------------my qn to clear that 
// #include<stdio.h>
// int main()
// {
//     int i=8;
//     {
//         int j=9;
//         printf("%d",i);
//     }
// }
//-----------------------------------------------example 08 in the ppt 
// #include<stdio.h>
// int main()
// {
//     int i=9;
//     int i=10;
//     {
//         printf("%d",i);
//     }
//     printf("%d",i);// the ans of this is the error : re-deffination or the re declaration of the i as the int int two times
// }
#include <stdio.h>
int main()
{
register int i = 0;
scanf("%d", &i);// HERE IT IS  shows the error bcs of the Why error happens?
// register tells the compiler:
// 👉 “Store this variable in CPU register (not in RAM) if possible”
// Registers do NOT have a memory address you can access
printf("i %d\n", i);
return 0;
}