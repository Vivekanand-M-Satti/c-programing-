//Shift Array Elements One Time to the Left
//1 2 3 4 5
//Ater shift: 2 3 4 5 1

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int first=arr[0];
    for (int i=0; i<size; i++)
    {
        arr[i]=arr[i+1];
    }
    
    arr[size-1]=first;
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}
