// Method -2
#include<stdio.h>

int table(int n);

int main()
{
    int n ;
    printf("Enter number to print table:"); scanf("%d",&n);
    table(n);   // here n is called argument or actual parameter because here we are giving actual value of n
    return 0;
}

int table(int n)   // here  n is called parameter or formal parameter
{
    for (int i=1 ; i<=10 ; i++) printf("%d \n",n*i);
}