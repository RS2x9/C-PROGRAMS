#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
    int _age=*ptr;

    // %p is format specifier of memory addresss so it is used to print memory addreess
    printf("\n value stored in ptr=%p",ptr);  // since ptr contains memeory address , so we have used %p 
    printf("\n age is:%d",_age);

    // these are not written in copy
    printf("\n memory address of age=%p",& age); 
    printf("\n memory address of _age=%p",& _age);
    int *ptr2=& _age;
    printf("\n value stored in ptr2=%p",ptr2);
    printf("\n memory address of ptr=%p",& ptr);
    printf("\n memory address of ptr2=%p",& ptr2);
    return 0;
}