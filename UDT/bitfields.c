#include<stdio.h>
struct Nibble
{
unsigned char lower : 4;
unsigned char upper : 4;
};
int main()
{
struct Nibble nibble;
nibble.upper = 0x0A;
nibble.lower = 0x02;
write
printf("%zu",sizeof(struct Nibble));
return 0;
}