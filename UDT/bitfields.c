#include<stdio.h>
#if 0
struct Nibble
{
unsigned int lower : 32;
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
#endif
struct Nibble
{
char lower : 4;
char upper : 4;
};
int main()
{
struct Nibble nibble = {0x02, 0x0A};
printf("%#o\n", nibble.upper);
printf("%#x\n", nibble.lower);
return 0;
}