// P6-8
// method-2
// using recursion
#include<stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("enter any number :"); scanf("%d",&n);
    if(n<0) printf("Enter number>=0");
    else printf("factorial of %d :%d",n,fact(n));
    return 0;
}

int fact(int n)
{
    int f=1;
    if(n==0) return 1;
    if(n==1) return 1;
    if(n>1)
    {
        f=n*fact(n-1);
        if(n==1) return f;
    }
}