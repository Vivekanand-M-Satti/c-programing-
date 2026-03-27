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
//     printf("%d",i);// the ans of this is the error : re-deffination or the re dclaration of the i as the int int two times
// }
//------------------------------------------------example 09
// #include <stdio.h>
// int main()
// {
// register int i = 0;
// scanf("%d", &i);// HERE IT IS  shows the error bcs of the Why error happens?
// // register tells the compiler:
// // “Store this variable in CPU register (not in RAM) if possible”
// // Registers do NOT have a memory address you can access
// printf("i %d\n", i);
// return 0;
// }
//-----------------------------------------------------example 10
// #include <stdio.h>
// int main()
// {
// register int i = 10;
// register int *j = &i;//same here also we can access the address of the register variable
// printf("*j %d\n", *j);
// return 0;
// }
//-----------------------------------------------------example 11

// #include <stdio.h>
// int main()
// {
// int i = 10;
// register int *j = &i;
// printf("*j %d\n", *j);// is  right out put is 10 
// //You cannot take address of a register variable, But you can store an  address of the local variable inside a register variable
// return 0;
// }
//-----------------------------------------------------ex 12 
// #include <stdio.h>
// int *foo()
// {
// static int i = 10;
// int *j = &i;
// return j;
// }
// int main()
// {
// int *i;
// i = foo();
// printf("*i %d\n", *i);// true it prints the value  bcs static is life time is end of the prgram thats why
// return 0;
// }
//---------------------------------------------------ex 13 
// #include <stdio.h>
// char *foo()
// {
// static char ca[12] = "Hello World";
// return ca;
// }
// int main()
// {
// char *ca;
// ca = foo();
// printf("ca is %s\n", ca);//true it prints the value  bcs static is life time is end of the prgram thats why
// return 0;
// }
// //---------------------------------------------example 14 
// #include <stdio.h>
// int book_ticket()
// {
// static int ticket_sold = 0;// the static variable cannot reset ONLY IN THE PROGRAM IT INTIALIZED ONLY ONE TIME
// ticket_sold++;
// return ticket_sold;
// }
// int main()
// {
// int count;
// count = book_ticket();
// count = book_ticket();
// printf("Sold %d\n", count);//Initialized only once
// //Value is remembered between function calls
// return 0;
// }
//-------------------------------------------------example 15
// #include <stdio.h>
// int main()
// {
// static int i = 5;
// if (--i)
// {
// main();
// }
// printf("i %d\n", i); //PRINTS THE i 0 five times brooo // because of the unwinding stack (back track);
// return 0;
// }
//------------------------------------------------example 16 
// #include <stdio.h>
// int main()
// {
// static int i = 5;
// if (--i)
// {
// return main();
// }
// printf("i %d\n", i);// beacuse of the return it not do any unwinding stack bro so it return at last print thew
// return 0;
// }
//-----------------------------------------example 17--IMP

// #include <stdio.h>
// int foo()
// {
// static int i;
// return i;
// }
// int main()
// {
// static int x = foo();//Static/global variables must be initialized with constant expressions- constant expression is that which compile time evaluate without the runn time 
// //foo() is a function call, not a constant
// // So this is NOT allowed in standard C(MAIN RESON IS THE IT HAS TO BE INITIALISED IN COMPILE TIME BUT WE ARE DOING IN THE RUNN TIME)
// printf("x %d\n", x);
// return 0;
// }
//----------------------------------example  18 
// #include <stdio.h>
// int *foo()
// {
// static int i = 10;
// int *j = &i;
// return j;
// }
// int main()
// {
// int *i;
// i = foo();
// printf("*i %d\n", *i);// it is right we it is the local variable so we can store that function caal in that
// return 0;
// }
//------------------------------------------example 19--imp fr interview
// #include <stdio.h>
// int *foo()
// {
// int i = 100;
// static int *j = &i;//This code causes undefined behavior because it returns a pointer to a local variable that is 
// //destroyed after function execution, resulting in a (dangling pointer)-THE POINTER THAT LOCATES  MEMPRY LOCATION  INVALID OR DESTROYED .
// return j;
// }
// int main()
// {
// int *i;
// i = foo();
// printf("*i %d\n", *i);
// return 0;
// }
//////////////////////////////////////////////////////global variable 
// //------------------------------example 20 
// #include <stdio.h>
// int x;
// int foo()
// {
// printf("x %d\n", x);// prinnts 0
// return ++x;
// }
// int main()
// {
// foo();
// printf("x %d\n", x);// prints 1
// return 0;
// }
//----------------------------------------example 22 imp 
// #include <stdio.h>
// register int x;//You cannot declare a global variable as register BEACAUSE IT IS stored in the CPU not in the 
// // but we are giving it as the global variable so it is  stored in the data segment memory so error broiiiiiiiiiiiiiiiiii
// int foo()
// {
// printf("x %d\n", x);
// return ++x;
// }
// int main()
// {
// foo();
// printf("x %d\n", x);
// return 0;
// }
//---------------------------------------example 21
// #include <stdio.h>
// auto int x;// same here bro it is it has to store in the stack but it is storing in the global vari in the data segment so errrror 
// int foo()
// {
// printf("x %d\n", x);
// return ++x;
// }
// int main()
// {
// foo();
// printf("x %d\n", x);
// return 0;
// }
//--------------------------------example 23
// #include <stdio.h>
// int x = 10;
// int foo()
// {
// printf("x %d\n", x);//  it is true bcs it is global variable 
// return 0;
// }
// int main()
// {
// foo();
// return 0;
// }
//----------------------------example 24 
// #include <stdio.h>
// int x = 10;/// it takee only one time intialization in the program 
// int x;// ignore the this line bcs it already defined 
// int foo()
// {
// printf("x %d\n", x);// prints the 10;
// return 0;
// }
// int main()
// {
// foo();
// return 0;
// }
// ------------------------exampple 25
// #include <stdio.h>
// int x = 10;// real defintion
// int x = 20;// another real defiantion it not take the global variable 
// //WHY --->Because C does not allow ambiguity in definition A variable must have exactly ONE definition
// //AMBIGUITY ------> MORE  THEN ONE POSSIBILITY MEANING IT UN CLEARE AND CAUSE THE CONFUSION 
// int foo()
// {
// printf("x %d\n", x);//int x; is a tentative definition and gets ignored if a real definition already exists, but int x = 20;
// // is a full definition, so having two such definitions causes a conflict and results in an error.
// return 0;
// }
// int main()
// {
// foo();
// return 0;
// }
//-------------------------------------------------------EXAMPLE 27;
// #include <stdio.h>
// static int x = 10;// we cannot do the same variable two times 
// int x;// it is the ambiguity so throw the erroor broo as the non-static declaartion of the x follows static declartion
// int foo()
// {
// printf("x %d\n", x);
// return 0;
// }
// int main()
// {
// foo();
// return 0;
// }
