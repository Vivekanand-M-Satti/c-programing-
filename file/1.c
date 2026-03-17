//--------------------------------this is where the normmal file read without the error broii----------
// #include<stdio.h>
// int main()
// {
//     FILE* ptr=fopen("new.txt","r");
//     fclose(ptr);
// }
//=======================================the read but but the not wxisting file show the segmentation fault thats why we are using the 
// validation for that to over come error brrooo 
#include<stdio.h>
int main()
{
    FILE* ptr=fopen("new.tt","r");
    if(ptr==NULL)
    {
        printf("hu mav atta kelsa");
        return -1;
    }
    fclose(ptr);// if the file not exist the we have return the in validation only beacuse at last in 
    // fclose the it closes the NULL it means the segnetation fault maam did u understand
    
}
