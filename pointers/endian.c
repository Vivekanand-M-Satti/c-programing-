


// //-----------------------------------------------------little endian-----------------------------------------------------------------
// /*#include<stdio.h>
// int main()
// {
//     int num=0x12345678;
//     int*ptr=&num;
//     char*cptr=&num;
//     printf("%hhx",*ptr);
//     if(*cptr==0x78)
//     {
//   printf("little ");
//     }
//     else{
//         printf("big");
//     }
// }
// //-------------------------------------------------little endian by using the usigned ------------------------------------
// #include<stdio.h>
// int main()
// {
//     int num=0x12345680;
//     int*ptr=&num;
//     unsigned char*cptr=&num;
//     printf("%hx",*ptr);
//     if(*cptr==0x80)
//     {
//   printf("little ");
//     }
//     else{
//         printf("big");
//     }
// }*/
// #include<stdio.h>
// int main()
// {
//     int num=0x12345670;
//     short int*ptr=&num;
//     unsigned char*cptr=&num;
//     printf("%hx",*ptr);
//     //if(*ptr==0x80)
//     {
//  // printf("little ");
//     }
//    // else{
//         //printf("big");
//     }
// }


#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function
void combination(char *str, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", str);
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(&str[l], &str[i]);           // Fix one character
        combination(str, l + 1, r);       // Recurse
        swap(&str[l], &str[i]);           // Backtrack
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // Check duplicate characters
    for (int i = 0; str[i]; i++)
    {
        for (int j = i + 1; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                printf("Error: please enter distinct characters\n");
                return 0;
            }
        }
    }

    int n = strlen(str);
    combination(str, 0, n - 1);

    return 0;
}