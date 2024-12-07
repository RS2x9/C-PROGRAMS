#include<stdio.h>
int main()
{
    int age=22;
    int _age=30;
    int *ptr=& age;
    int *_ptr=& _age;
    printf("ptr=%u _ptr=%u and ptr-_ptr=%d \n ", ptr , _ptr , ptr-_ptr);
    // now comparing 
    printf("%d",ptr==_ptr);
    return 0;
}