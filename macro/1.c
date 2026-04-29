// #include <stdio.h>
// int main()
// {
// printf("program %s \n", __FILE__);
// printf("was compiled on %s at %s\n", __DATE__,__TIME__);
// printf("This print is from Function: %s", __func__);
// printf("at line %d\n",__LINE__);
// return 0;
// }

#if 0
#include <stdio.h>
#define SET_BIT(num, pos)  (num | (1 << pos))
int main()
{
printf("%d\n", 2 * SET_BIT(0, 2));//prints the 8 now 
return 0;
}
#endif

#if 0
#include <stdio.h>
#define SET_BIT(num, pos)  num | (1 << pos)
int main()
{
printf("%d\n", 2 * SET_BIT(0, 2));//prints the 4 now 
return 0;
}
#endif
#if 0
#include <stdio.h>

#define SWAP(a, b) \
\
    int temp = a; \
    a = b; \
    b = temp; \  this give the error as the redefination error ;
 

int main()
{
    int n1 = 10, n2 = 20;

    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);

    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);

    return 0;
}
#endif
#if 0
#include <stdio.h>

#define SWAP(a, b) \
{ \
    int temp = a; \
    a = b; \
    b = temp; \
}

int main()
{
    int n1 = 10, n2 = 20;

    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);

    SWAP(n1, n2);
    printf("%d %d\n", n1, n2);

    return 0;
}
#endif 
#include <stdio.h>
#define WARN_IF(EXP) \
do \
{ \
x--; \
if (EXP) \
{ \
fprintf(stderr, "Warning: " #EXP "\n"); \
} \
} while (x);
int main()
{
int x = 5;
WARN_IF(x == 0);
return 0;
}
