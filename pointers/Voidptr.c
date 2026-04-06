// #include<stdio.h>
// int main()
// {
//     void *ptr;
//     printf("%zu",sizeof(*ptr));
// }
// swap the numbers by using the void pointer 
#include<stdio.h>
void swap(void *f,void*s,int size
}
int main()
{
    int n1 =10,n2=20;
    printf("Bef: %d %d\n",n1,n2);
    swap(&n1,&n2,sizeof(int));

    char c1 ='A',c2='Z';
    printf("Bed :%c %c\n",c1,c2);
    swap(&c1,&c2,sizeof(char));



    
     

}