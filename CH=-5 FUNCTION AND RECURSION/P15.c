// PRACTICE :30 FACTORIAL OF A NUMBER USING RECURSION
#include<stdio.h>

int fact(int count);

int main()
{
    int n ;
    printf("Enter number:") ;
    scanf("%d",& n);
    if (n<0) printf("Enter number> 0");
    else if(n ==0 || n ==1) printf("Factorial of %d is 1",n);
    else printf("factorial: %d",fact(n));
    return 0;
}

int fact(int count )
{
    int factorial=1;
    if (count>1) factorial=count*fact(count-1);
    return factorial;
}