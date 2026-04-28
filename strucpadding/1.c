#include <stdio.h>
#pragma pack(1)
struct Student
{
char ch1;
double num;
char ch2;
};
int main()
{
struct Student s1;
printf("%zu\n", sizeof(s1));
return 0;
}
