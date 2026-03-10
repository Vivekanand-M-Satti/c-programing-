//----------------------------------------call by value of the structure---------------

#if 0
#include<stdio.h>
struct std
    {
        int id;
        char name[49];
        char add[29];
    };
    void call(struct std v)
    {
        v.id=98;// take another memory as usual the std by and give tthe value 98;// so  bby the call by value the 
        printf("%d",v.id);
    }
int main()
{
    struct std s={90};
    call(s);
    printf("%d",s.id);






}
#endif
#include<stdio.h>
struct std
    {
        int id;
        char name[49];
        char add[29];
    };
    void call(struct std *v)
    {
        (*v).id=98;//
        printf("%d",v->id);
    }
int main()
{
    struct std s={90};
    call(&s);
    printf("%d",s.id);






}
