// example of pointer to pointer
#include<stdio.h>
int main()
{
    float price=100;
    float *ptr=&price;
    float **pptr=&ptr;  // THIS HAS STORED MEMORY ADDRESS OF ptr
    printf("%p \n",& price);
    printf("%p \n",&ptr);
    printf("%p",&pptr);
    return 0;
}