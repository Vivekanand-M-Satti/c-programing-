
//passing and collecting the array in the funtion byusing single level pointer
#if 0
#include <stdio.h>
void print_array(int row, int col, int *p)
{
    int i, j;
 for (i = 0; i < row; i++)
 {
        for (j = 0; j < col; j++)
        {
            printf("%d", *((p + i * col) + j));
        }
        printf("\n");
 }
}
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print_array(2, 3, (int *) a);
    print_array(2, 3, *a);
    print_array(2, 3, a[0]);
    print_array(2, 3, &a[0][0]);
    return 0;
}
    #endif
    #include <stdio.h>
void print_array(int(*arr)[2])
{
    int i, j;
 for (i = 0; i <2; i++)
 {
        for (j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
 }
}
int main()
{
    int arr[2][3] = {1, 2, 3 ,4, 5, 6};
    print_array(arr);
    return 0;
}
