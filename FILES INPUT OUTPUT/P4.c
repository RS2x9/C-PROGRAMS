// using fgetc()
#include<stdio.h>
int main()
{
    // first write something in the text file
    FILE *ptr;
    ptr=fopen("test2.txt","r");
    printf("\n %c",fgetc(ptr));
    printf("\n %c",fgetc(ptr));
    printf("\n %c",fgetc(ptr));
    printf("\n %c",fgetc(ptr));
    printf("\n %c",fgetc(ptr));
    fclose(ptr);
}