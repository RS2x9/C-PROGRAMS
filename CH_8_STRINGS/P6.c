// STRING AS POINTERS 
#include<stdio.h>
int main()
{
    char *canchange="Hello World";
    puts(canchange);
    canchange="kumar";
    puts(canchange);
    printf("\n");

    char cannotchange[]="how are you";
    puts(cannotchange);
    cannotchange="hello";
    puts(cannotchange);  
    // Error shows : char arrays cannot be modified

    return 0;
}