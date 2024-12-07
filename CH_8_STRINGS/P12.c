// PRACTICE 50
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    char ch; int i=0;
    printf("Enter any thing:");
    while(ch!='\n')
    {
        scanf("%c",&ch);
        name[i]=ch;
        i=i+1;
    }
    // %c cannot add '\0' at the end of char array, we have to add it
    name[i]='\0';
    puts(name);
    return 0;
}