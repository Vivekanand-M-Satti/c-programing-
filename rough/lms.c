// 

void print(int *number)
{
    printf("%d", *number);
}

void main()
{
    int i = 999999;

    print(i++);
}