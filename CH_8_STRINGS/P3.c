// PRACTICE 47
#include<stdio.h>
char printstring(char arr[]);
int main()
{
    char firstname[]="RISHABH", lastname[]="KUMAR";
    printstring(firstname);  // we will not write printstring(firstname[])
    printstring(lastname);    // we will not write printstring(lastname[])
    return 0;
}

char printstring(char arr[])
{
    for (int i=0; arr[i]!='\0' ; i++)
    {
        printf("%c",arr[i]);
    }
    printf(" ");
}