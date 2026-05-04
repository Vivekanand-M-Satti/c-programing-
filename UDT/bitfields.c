#include<stdio.h>
struct Nibble
{
unsigned int lower : 33;
unsigned int upper : 10;
};
int main()
{
struct Nibble nibble;
// nibble.upper = 0x0A;
// nibble.lower = 0x02;
printf("%zu",sizeof(struct Nibble));
return 0;
}