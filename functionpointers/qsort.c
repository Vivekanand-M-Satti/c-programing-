// -------------------------------------------------sort the int array broiiii --
// #include <stdio.h>
// #include <stdlib.h>

// // Prototypes first
// int sa(const void *a, const void *b);
// int sd(const void *a, const void *b);
// void print(int *a, unsigned int size);

// int main()
// {
//     int a[5] = {9, 2, 6, 1, 7};

//     qsort(a, 5, sizeof(int), sa);
//     printf("Ascending: ");
//     print(a, 5);

//     qsort(a, 5, sizeof(int), sd);
//     printf("Descending: ");
//     print(a, 5);

//     return 0;
// }

// // For ascending: return negative if a<b, 0 if equal, positive if a>b
// int sa(const void *a, const void *b)
// {
//     int x = *(const int *)a;
//     int y = *(const int *)b;
//     return x - y; // or: (x > y) - (x < y) to avoid overflow
// }

// // For descending: flip the sign
// int sd(const void *a, const void *b)
// {
//     int x = *(const int *)a;
//     int y = *(const int *)b;
//     return y - x; // reverse of ascending
// }

// void print(int *a, unsigned int size)
// {
//     for (unsigned int i = 0; i < size; i++)
//         printf("%d ", a[i]);
//     printf("\n");
// }
// ---------------------------------------------------sort the double array 
// #include <stdio.h>
// #include <stdlib.h>

// // Prototypes
// int ascend_double(const void *a, const void *b);
// int descend_double(const void *a, const void *b);
// void print_double(double *arr, unsigned int size);

// int main()
// {
//     double arr[] = {9.1, 2.5, 6.7, 1.3, 7.9, 2.5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     qsort(arr, n, sizeof(double), ascend_double);
//     printf("Ascending: ");
//     print_double(arr, n);

//     qsort(arr, n, sizeof(double), descend_double);
//     printf("Descending: ");
//     print_double(arr, n);

//     return 0;
// }

// int ascend_double(const void *a, const void *b)
// {
//     double x = *(const double *)a;
//     double y = *(const double *)b;

//     if (x < y) return -1;
//     if (x > y) return 1;
//     return 0;
//     // Shorter: return (x > y) - (x < y);
// }

// int descend_double(const void *a, const void *b)
// {
//     double x = *(const double *)a;
//     double y = *(const double *)b;

//     if (x > y) return -1;
//     if (x < y) return 1;
//     return 0;
//     // Shorter: return (y > x) - (y < x);
// }

// void print_double(double *arr, unsigned int size)
// {
//     for (unsigned int i = 0; i < size; i++)
//         printf("%.2f ", arr[i]);
//     printf("\n");
// }
// -----------------------------------------------sort the string---------------------
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototypes like previous one
int sa_string(const void *a, const void *b); // ascending
int sd_string(const void *a, const void *b); // descending
void print(char **a, unsigned int size);

int main()
{
    char *a[5] = {"orange", "apple", "banana", "grape", "cherry"};

    qsort(a, 5, sizeof(char *), sa_string);
    printf("Ascending: ");
    print(a, 5);

    qsort(a, 5, sizeof(char *), sd_string);
    printf("Descending: ");
    print(a, 5);

    return 0;
}

int sa_string(const void *a, const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    return strcmp(str1, str2); // <0 if str1 < str2
}
int sd_string(const void *a, const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    return strcmp(str2, str1); // flip for descending
}

void print(char **a, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
        printf("%s ", a[i]);
    printf("\n");
}
    #endif
    #include<stdio.h>
    #include<stdlib.h>
    int cm(const void *p,const void *p2)
    {
        return *(int *)p<*(int*)p2;

    }
    int main()
    {
        int ar[6]={5,4,3,6,22,4};
        qsort(ar,6,sizeof(int),cm);
        for(int i=0;i<6;i++)
        {
            printf("%d ",ar[i]);
        }
    }