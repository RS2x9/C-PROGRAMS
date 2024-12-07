#include<stdio.h>
#include<string.h>
int main()
{
    char oldstr[]="hello everyone";
    char newstr[]="We are all good";
    puts(newstr);
    //strcpy(newstr,oldstr);
    puts(newstr);

    printf("\n");
    strcpy(oldstr,newstr);
    puts(oldstr);
    return 0;
}