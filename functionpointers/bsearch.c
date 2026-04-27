// when ever we use the bsearch we have to use the qsort and 
// bsearch is the binary search the serch it is present or not
// if present return the address if nnot then returrn the  NULL
#include<stdio.h>
#include<stdlib.h>
#if 0
void print_arr(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int sa(const void *p1, const void *p2)
{
    return *(int *)p1 > *(int *)p2;
}
int sd(const void *p1, const void *p2)
{
    return *(int *)p1 < *(int *)p2;
}
int main()
{
    int arr[5] = {9, 2, 6, 1, 7};

    qsort(arr, 5, 4, sa);
    printf("Ascending : ");
    print_arr(arr, 5);

    qsort(arr, 5, 4, sd);
    printf("Descending : ");
    print_arr(arr, 5);

    return 0;

}
#endif


#if 0
void print_arr(double arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%lf ", arr[i]);
    }
    printf("\n");
}
int sa(const void *p1, const void *p2)
{
    return *(double *)p1 > *(double *)p2;
}
int sd(const void *p1, const void *p2)
{
    return *(double *)p1 < *(double *)p2;
}
int main()
{
    double arr[5] = {9.95, 9.125, 9.0612, 9.45, 9.234};

    qsort(arr, 5, 8, sa);
    printf("Ascending : ");
    print_arr(arr, 5);

    qsort(arr, 5, 8, sd);
    printf("Descending : ");
    print_arr(arr, 5);

    return 0;

}
#endif

#include<string.h>
#if 0
void print_arr(char arr[][10], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}
int sa(const void *p1, const void *p2)
{
    return strcmp(p1, p2) > 0;
}
int sd(const void *p1, const void *p2)
{
    return strcmp(p1, p2) < 0;
}
int main()
{
    char arr[5][10] = {"ram", "rupa", "ram", "reyan", "rinku"};

    qsort(arr, 5, 4, sa);
    printf("Ascending : ");
    print_arr(arr, 5);

    qsort(arr, 5, 4, sd);
    printf("Descending : ");
    print_arr(arr, 5);

    return 0;

}
#endif


#if 1
void print_arr(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int sa(const void *p1, const void *p2)
{
    if(*(int *) p1 > *(int *) p2)
        return 1;
    if(*(int *) p1 < *(int *) p2)
        return -1;
    return 0;
}

int main()
{
    int arr[5] = {9, 2, 6, 1, 7};

    int key = 9;
    qsort(arr, 5, 4, sa);
    printf("Ascending : ");
    print_arr(arr, 5);

    int *ptr;
    ptr = bsearch(&key, arr, 5, 4, sa);
    ptr == NULL ?printf("Not found\n"): printf("Found\n");
    return 0;

}
#endif