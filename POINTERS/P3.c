#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
    printf("%d \n",age);    // prints value of age 
    printf("%d \n",*ptr) ; // prints the value stored at memory addresss stored in ptr
    printf("%d",*(&age));   // prints the value stored at the memory address of age 
    return 0;
}