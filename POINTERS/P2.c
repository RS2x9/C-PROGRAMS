#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=& age ;
    printf("%p \n",&age);
    printf("%p \n",ptr);
    printf("%p \n",&ptr);
    printf("%u",ptr);
    return 0;
}