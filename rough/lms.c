// // // // 
// // // #include<stdio.h>

// // //   print(int number)
// // // {
// // //     printf("%d", number);
// // //     return 89;
// // // }

// // // void main()
// // // {
// // //     int i = 999999;

// // //     int k=print(i++);
// // //      printf("%d", k);
// // // }
// // What is the output of this C code?

// // void main()

// // int i;

// // int num_array[l;

// // int *array_ptr = num_array;

// // for (i = 0; i < 5; i++)

// // printf("%d", *(array_ptr + i));

// // What is the output of this C code?

// // void main()

// // int i;

// // int num_array[l;

// // int *array_ptr = num_array;

// // for (i = 0; i < 5; i++)

// // printf("%d", *(array_ptr + i));


// #include <stdio.h>

// void main()
// {
//     int i;

//     int num_array[] = { /* no initialization */ };

//     int *array_ptr = num_array;

//     for (i = 0; i < 5; i++)
//         printf("%d ", num_array[i]);
// }
#include <stdio.h>

int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d, ", no);

    reverse(no-1);
}

int main()
{
    int no = 5;

    reverse(no);

    return 0;
}