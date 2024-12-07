// strcmp
#include<stdio.h>
#include<string.h>
int main()
{
    char first[]="apple";
    char second[]="Apple";
    char third[]="ddsa";
    char fourth[]="dfrdsg";
    printf("%d \n",strcmp(first,second));
    printf("%d \n",strcmp(first,third));
    printf("%d \n",strcmp(first,fourth));
    printf("%d \n",strcmp(third,fourth));
    return 0;
}